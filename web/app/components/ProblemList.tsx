"use client";

import { useState, useMemo, useEffect } from 'react';
import Link from 'next/link';

const ITEMS_PER_PAGE = 24;
const MAX_TAGS_TO_SHOW = 15;

// 🌟 新增：排序選項與資料結構
type SortOption = 'id' | 'views' | 'likes' | 'approval';
type StatsMap = Record<string, { views: number; likes: number; dislikes: number; approvalRate: number }>;

export default function ProblemList({ problems }: { problems: { id: string; title: string; tags: string[] }[] }) {
  const [searchQuery, setSearchQuery] = useState('');
  const [selectedTag, setSelectedTag] = useState<string | null>(null);
  const [currentPage, setCurrentPage] = useState(1);
  const [isTagsExpanded, setIsTagsExpanded] = useState(false);
  const [jumpInput, setJumpInput] = useState('');

  // 🌟 新增：動態數據狀態
  const [statsMap, setStatsMap] = useState<StatsMap>({});
  const [sortBy, setSortBy] = useState<SortOption>('id');
  const [isLoadingStats, setIsLoadingStats] = useState(true);

  // 🌟 新增：元件載入時，批次向 Redis 索取所有題目的數據
  useEffect(() => {
    const fetchAllStats = async () => {
      try {
        const ids = problems.map(p => p.id);
        const res = await fetch('/api/stats/batch', {
          method: 'POST',
          headers: { 'Content-Type': 'application/json' },
          body: JSON.stringify({ ids }),
        });
        const data = await res.json();
        
        if (data.stats) {
          // 計算好評度 (Approval Rate)
          const enhancedStats: StatsMap = {};
          for (const [id, stat] of Object.entries(data.stats as Record<string, any>)) {
            const totalVotes = stat.likes + stat.dislikes;
            const approvalRate = totalVotes === 0 ? 0 : Math.round((stat.likes / totalVotes) * 100);
            enhancedStats[id] = { ...stat, approvalRate };
          }
          setStatsMap(enhancedStats);
        }
      } catch (error) {
        console.error('無法取得統計資料', error);
      } finally {
        setIsLoadingStats(false);
      }
    };

    if (problems.length > 0) {
      fetchAllStats();
    }
  }, [problems]);

  const allTags = useMemo(() => {
    const tagCounts: Record<string, number> = {};
    problems.forEach(p => {
      p.tags.forEach(t => {
        tagCounts[t] = (tagCounts[t] || 0) + 1;
      });
    });

    return Object.entries(tagCounts)
      .sort((a, b) => b[1] - a[1] || a[0].localeCompare(b[0]))
      .map(entry => ({ name: entry[0], count: entry[1] }));
  }, [problems]);

  const displayedTags = isTagsExpanded ? allTags : allTags.slice(0, MAX_TAGS_TO_SHOW);

  const handleSearch = (e: React.ChangeEvent<HTMLInputElement>) => {
    setSearchQuery(e.target.value);
    setCurrentPage(1);
  };

  const handleTagClick = (tag: string) => {
    setSelectedTag(prev => prev === tag ? null : tag);
    setCurrentPage(1);
  };

  const handleJump = (e: React.KeyboardEvent<HTMLInputElement>) => {
    if (e.key === 'Enter') {
      const page = parseInt(jumpInput);
      if (!isNaN(page) && page >= 1 && page <= totalPages) {
        setCurrentPage(page);
        setJumpInput('');
      }
    }
  };

  // 🌟 升級：過濾完畢後，根據所選的 sortBy 進行動態排序
  const filteredAndSortedProblems = useMemo(() => {
    let result = problems.filter(prob => {
      const query = searchQuery.toLowerCase();
      const matchSearch = prob.id.toLowerCase().includes(query) || 
                          prob.title.toLowerCase().includes(query) ||
                          prob.tags.some(tag => tag.toLowerCase().includes(query));
      
      const matchTag = selectedTag ? prob.tags.includes(selectedTag) : true;
      return matchSearch && matchTag;
    });

    // 依照使用者選擇排序
    if (sortBy !== 'id') {
      result.sort((a, b) => {
        const statA = statsMap[a.id] || { views: 0, likes: 0, approvalRate: 0 };
        const statB = statsMap[b.id] || { views: 0, likes: 0, approvalRate: 0 };
        
        if (sortBy === 'views') return statB.views - statA.views;
        if (sortBy === 'likes') return statB.likes - statA.likes;
        if (sortBy === 'approval') return statB.approvalRate - statA.approvalRate;
        return 0;
      });
    }

    return result;
  }, [problems, searchQuery, selectedTag, sortBy, statsMap]);

  const totalPages = Math.ceil(filteredAndSortedProblems.length / ITEMS_PER_PAGE);
  const startIndex = (currentPage - 1) * ITEMS_PER_PAGE;
  const currentProblems = filteredAndSortedProblems.slice(startIndex, startIndex + ITEMS_PER_PAGE);

  return (
    <div>
      {/* 🌟 升級：搜尋列與排序下拉選單並排 */}
      <div className="mb-8 flex flex-col md:flex-row gap-4 relative">
        <div className="relative flex-grow">
          <input
            type="text"
            placeholder="搜尋題號、題目名稱，或標籤 (例如 DP、Greedy)..."
            className="w-full pl-4 pr-10 py-3 rounded-xl border border-gray-200 dark:border-gray-700 bg-white dark:bg-gray-800 text-gray-900 dark:text-gray-100 placeholder-gray-400 dark:placeholder-gray-500 focus:outline-none focus:ring-2 focus:ring-blue-500 shadow-sm transition-all"
            value={searchQuery}
            onChange={handleSearch}
          />
          <svg 
            className="absolute right-3 top-3.5 h-5 w-5 text-gray-400 dark:text-gray-500" 
            fill="none" viewBox="0 0 24 24" stroke="currentColor"
          >
            <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M21 21l-6-6m2-5a7 7 0 11-14 0 7 7 0 0114 0z" />
          </svg>
        </div>

        <div className="flex items-center gap-2">
          <span className="text-gray-500 dark:text-gray-400 font-medium whitespace-nowrap hidden sm:block">排序方式：</span>
          <select
            value={sortBy}
            onChange={(e) => {
              setSortBy(e.target.value as SortOption);
              setCurrentPage(1);
            }}
            className="w-full md:w-auto px-4 py-3 rounded-xl border border-gray-200 dark:border-gray-700 bg-white dark:bg-gray-800 text-gray-700 dark:text-gray-200 focus:outline-none focus:ring-2 focus:ring-blue-500 cursor-pointer shadow-sm transition-all"
          >
            <option value="id">預設 (題號)</option>
            <option value="views">🔥 最多觀看</option>
            <option value="likes">👍 最多讚數</option>
            <option value="approval">⭐ 最高好評度</option>
          </select>
        </div>
      </div>

      {allTags.length > 0 && (
        <div className="mb-8 flex flex-wrap gap-2 items-center">
          <span className="text-sm font-bold text-gray-500 dark:text-gray-400 mr-2">熱門考點：</span>
          {displayedTags.map(({ name, count }) => (
            <button
              key={name}
              onClick={() => handleTagClick(name)}
              className={`px-3 py-1.5 rounded-lg text-sm font-medium transition-all ${
                selectedTag === name 
                  ? 'bg-blue-600 text-white shadow-md' 
                  : 'bg-white dark:bg-gray-800 text-gray-600 dark:text-gray-300 border border-gray-200 dark:border-gray-700 hover:border-blue-300 dark:hover:border-blue-500 hover:text-blue-600 dark:hover:text-blue-400'
              }`}
            >
              # {name} <span className="ml-1 text-xs opacity-60">({count})</span>
            </button>
          ))}
          
          {allTags.length > MAX_TAGS_TO_SHOW && (
            <button
              onClick={() => setIsTagsExpanded(!isTagsExpanded)}
              className="px-3 py-1.5 rounded-lg text-sm font-medium text-blue-600 dark:text-blue-400 hover:bg-blue-50 dark:hover:bg-blue-900/30 transition-all underline decoration-dashed underline-offset-4 ml-1"
            >
              {isTagsExpanded ? '收合標籤 ▲' : `顯示全部 (${allTags.length}) ▼`}
            </button>
          )}
        </div>
      )}

      <div className="grid grid-cols-1 sm:grid-cols-2 md:grid-cols-3 lg:grid-cols-4 gap-4 mb-8">
        {currentProblems.length === 0 ? (
          <p className="text-gray-500 dark:text-gray-400 col-span-full">找不到符合條件的題目 🥲</p>
        ) : (
          currentProblems.map((prob) => {
            // 🌟 獲取該題的統計資料
            const stats = statsMap[prob.id];

            return (
              <Link 
                href={`/problem/${prob.id}`} 
                key={prob.id}
                className="block p-6 bg-white dark:bg-gray-800 rounded-xl shadow-sm hover:shadow-md hover:-translate-y-1 transition-all border border-gray-100 dark:border-gray-700 hover:border-blue-200 dark:hover:border-blue-500 flex flex-col justify-between group h-full"
              >
                <div>
                  <h2 className="text-lg font-bold text-gray-800 dark:text-gray-100 mb-3 line-clamp-2 transition-colors">
                    <span className="text-blue-600 dark:text-blue-400 uppercase mr-2">{prob.id}</span>
                    {prob.title}
                  </h2>
                  <div className="flex flex-wrap gap-1.5 mb-4">
                    {prob.tags.slice(0, 3).map(tag => (
                      <span key={tag} className="text-xs px-2 py-0.5 bg-gray-100 dark:bg-gray-700 text-gray-600 dark:text-gray-300 rounded transition-colors">
                        {tag}
                      </span>
                    ))}
                    {prob.tags.length > 3 && <span className="text-xs px-2 py-0.5 text-gray-400 dark:text-gray-500">...</span>}
                  </div>
                </div>

                {/* 🌟 升級：卡片底部顯示觀看數、讚數、好評度 */}
                <div className="pt-3 border-t border-gray-100 dark:border-gray-700 flex items-center justify-between text-xs text-gray-500 dark:text-gray-400">
                  {isLoadingStats ? (
                    <div className="animate-pulse bg-gray-200 dark:bg-gray-700 h-4 w-full rounded"></div>
                  ) : stats ? (
                    <>
                      <div className="flex items-center gap-1.5 transition-colors group-hover:text-blue-500">
                        <svg className="w-3.5 h-3.5" fill="none" viewBox="0 0 24 24" stroke="currentColor">
                          <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M15 12a3 3 0 11-6 0 3 3 0 016 0z" />
                          <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M2.458 12C3.732 7.943 7.523 5 12 5c4.478 0 8.268 2.943 9.542 7-1.274 4.057-5.064 7-9.542 7-4.477 0-8.268-2.943-9.542-7z" />
                        </svg>
                        {stats.views}
                      </div>
                      <div className="flex items-center gap-3">
                        <div className="flex items-center gap-1 text-green-600 dark:text-green-500 font-medium">
                          👍 {stats.likes}
                        </div>
                        {stats.likes + stats.dislikes > 0 && (
                          <div className={`flex items-center gap-1 font-medium ${stats.approvalRate >= 70 ? 'text-yellow-600 dark:text-yellow-500' : 'text-gray-400 dark:text-gray-500'}`}>
                            ⭐ {stats.approvalRate}%
                          </div>
                        )}
                      </div>
                    </>
                  ) : (
                    <span>無數據</span>
                  )}
                </div>
              </Link>
            )
          })
        )}
      </div>

      {totalPages > 1 && (
        <div className="flex flex-col sm:flex-row items-center justify-center gap-4 mt-8 pt-6 border-t border-gray-200 dark:border-gray-800">
          <button
            onClick={() => setCurrentPage(prev => Math.max(prev - 1, 1))}
            disabled={currentPage === 1}
            className="px-4 py-2 rounded-lg font-medium text-gray-700 dark:text-gray-300 bg-white dark:bg-gray-800 border border-gray-300 dark:border-gray-700 hover:bg-gray-50 dark:hover:bg-gray-700 disabled:opacity-50 disabled:cursor-not-allowed transition-colors"
          >
            上一頁
          </button>
          
          <div className="flex items-center gap-3">
            <span className="text-gray-600 dark:text-gray-400 font-medium whitespace-nowrap">
              第 {currentPage} 頁 / 共 {totalPages} 頁
            </span>
            <div className="hidden sm:flex items-center gap-2 pl-3 border-l border-gray-300 dark:border-gray-700">
              <span className="text-sm text-gray-500 dark:text-gray-400">跳至</span>
              <input
                type="number"
                min={1}
                max={totalPages}
                value={jumpInput}
                onChange={(e) => setJumpInput(e.target.value)}
                onKeyDown={handleJump}
                className="w-16 px-2 py-1 text-center rounded-lg border border-gray-300 dark:border-gray-700 bg-white dark:bg-gray-800 text-gray-700 dark:text-gray-300 focus:outline-none focus:ring-2 focus:ring-blue-500 text-sm transition-colors"
                placeholder="頁碼"
              />
              <span className="text-sm text-gray-500 dark:text-gray-400">頁 (按 Enter)</span>
            </div>
          </div>

          <button
            onClick={() => setCurrentPage(prev => Math.min(prev + 1, totalPages))}
            disabled={currentPage === totalPages}
            className="px-4 py-2 rounded-lg font-medium text-gray-700 dark:text-gray-300 bg-white dark:bg-gray-800 border border-gray-300 dark:border-gray-700 hover:bg-gray-50 dark:hover:bg-gray-700 disabled:opacity-50 disabled:cursor-not-allowed transition-colors"
          >
            下一頁
          </button>
        </div>
      )}
    </div>
  );
}