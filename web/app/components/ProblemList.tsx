"use client";

import { useState, useMemo } from 'react';
import Link from 'next/link';

const ITEMS_PER_PAGE = 24;
const MAX_TAGS_TO_SHOW = 15;

export default function ProblemList({ problems }: { problems: { id: string; title: string; tags: string[] }[] }) {
  const [searchQuery, setSearchQuery] = useState('');
  const [selectedTag, setSelectedTag] = useState<string | null>(null);
  const [currentPage, setCurrentPage] = useState(1);
  const [isTagsExpanded, setIsTagsExpanded] = useState(false); // 👈 新增：控制標籤是否展開
  const [jumpInput, setJumpInput] = useState(''); // 👈 新增：控制頁碼跳轉的輸入框

  // 1. 取得所有標籤 (不再硬切前 15 個)
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

  // 決定畫面上要顯示哪些標籤
  const displayedTags = isTagsExpanded ? allTags : allTags.slice(0, MAX_TAGS_TO_SHOW);

  const handleSearch = (e: React.ChangeEvent<HTMLInputElement>) => {
    setSearchQuery(e.target.value);
    setCurrentPage(1);
  };

  const handleTagClick = (tag: string) => {
    setSelectedTag(prev => prev === tag ? null : tag);
    setCurrentPage(1);
  };

  // 👈 新增：處理頁碼跳轉 (按 Enter 觸發)
  const handleJump = (e: React.KeyboardEvent<HTMLInputElement>) => {
    if (e.key === 'Enter') {
      const page = parseInt(jumpInput);
      if (!isNaN(page) && page >= 1 && page <= totalPages) {
        setCurrentPage(page);
        setJumpInput(''); // 跳轉後清空輸入框
      }
    }
  };

  const filteredProblems = useMemo(() => {
    return problems.filter(prob => {
      const query = searchQuery.toLowerCase();
      // 2. 👈 新增：搜尋邏輯加入 tags 的比對
      const matchSearch = prob.id.toLowerCase().includes(query) || 
                          prob.title.toLowerCase().includes(query) ||
                          prob.tags.some(tag => tag.toLowerCase().includes(query));
      
      const matchTag = selectedTag ? prob.tags.includes(selectedTag) : true;
      return matchSearch && matchTag;
    });
  }, [problems, searchQuery, selectedTag]);

  const totalPages = Math.ceil(filteredProblems.length / ITEMS_PER_PAGE);
  const startIndex = (currentPage - 1) * ITEMS_PER_PAGE;
  const currentProblems = filteredProblems.slice(startIndex, startIndex + ITEMS_PER_PAGE);

  return (
    <div>
      <div className="mb-8 relative">
        <input
          type="text"
          placeholder="搜尋題號、題目名稱，或標籤 (例如 DP、Greedy)..."
          className="w-full sm:max-w-md pl-4 pr-10 py-3 rounded-xl border border-gray-200 dark:border-gray-700 bg-white dark:bg-gray-800 text-gray-900 dark:text-gray-100 placeholder-gray-400 dark:placeholder-gray-500 focus:outline-none focus:ring-2 focus:ring-blue-500 shadow-sm transition-all"
          value={searchQuery}
          onChange={handleSearch}
        />
        <svg 
          className="absolute right-3 top-3.5 h-5 w-5 text-gray-400 dark:text-gray-500 sm:left-[26rem]" 
          fill="none" viewBox="0 0 24 24" stroke="currentColor"
        >
          <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M21 21l-6-6m2-5a7 7 0 11-14 0 7 7 0 0114 0z" />
        </svg>
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
          
          {/* 3. 👈 新增：展開/收合按鈕 */}
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
          currentProblems.map((prob) => (
            <Link 
              href={`/problem/${prob.id}`} 
              key={prob.id}
              className="block p-6 bg-white dark:bg-gray-800 rounded-xl shadow-sm hover:shadow-md hover:-translate-y-1 transition-all border border-gray-100 dark:border-gray-700 hover:border-blue-200 dark:hover:border-blue-500 flex flex-col group"
            >
              <div>
                <h2 className="text-lg font-bold text-gray-800 dark:text-gray-100 mb-3 line-clamp-2 transition-colors">
                  <span className="text-blue-600 dark:text-blue-400 uppercase mr-2">{prob.id}</span>
                  {prob.title}
                </h2>
                <div className="flex flex-wrap gap-1.5">
                  {prob.tags.slice(0, 3).map(tag => (
                    <span key={tag} className="text-xs px-2 py-0.5 bg-gray-100 dark:bg-gray-700 text-gray-600 dark:text-gray-300 rounded transition-colors">
                      {tag}
                    </span>
                  ))}
                  {prob.tags.length > 3 && <span className="text-xs px-2 py-0.5 text-gray-400 dark:text-gray-500">...</span>}
                </div>
              </div>
            </Link>
          ))
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
          
          {/* 4. 👈 升級：頁碼顯示與跳轉輸入框 */}
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