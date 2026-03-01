"use client"; // 宣告這是客戶端元件，可以使用 useState 等互動功能

import { useState, useMemo } from 'react';
import Link from 'next/link';

const ITEMS_PER_PAGE = 24; // 設定一頁顯示的題目數量

export default function ProblemList({ problems }: { problems: { id: string }[] }) {
  // 建立搜尋字串與目前頁碼的狀態
  const [searchQuery, setSearchQuery] = useState('');
  const [currentPage, setCurrentPage] = useState(1);

  // 當搜尋字串改變時，除了更新字串，必須強制回到第一頁
  const handleSearch = (e: React.ChangeEvent<HTMLInputElement>) => {
    setSearchQuery(e.target.value);
    setCurrentPage(1);
  };

  // 根據搜尋字串過濾題目 (加上 useMemo 避免每次 re-render 都重新比對全陣列)
  const filteredProblems = useMemo(() => {
    return problems.filter(prob =>
      prob.id.toLowerCase().includes(searchQuery.toLowerCase())
    );
  }, [problems, searchQuery]);

  // 計算分頁所需的變數
  const totalPages = Math.ceil(filteredProblems.length / ITEMS_PER_PAGE);
  const startIndex = (currentPage - 1) * ITEMS_PER_PAGE;
  // 切割出當前頁面要顯示的題目
  const currentProblems = filteredProblems.slice(startIndex, startIndex + ITEMS_PER_PAGE);

  return (
    <div>
      {/* 搜尋輸入框 */}
      <div className="mb-8 relative">
        <input
          type="text"
          placeholder="搜尋題號 (例如 a001)..."
          className="w-full sm:max-w-md pl-4 pr-10 py-3 rounded-xl border border-gray-200 bg-white text-gray-900 placeholder-gray-400 focus:outline-none focus:ring-2 focus:ring-blue-500 shadow-sm transition-all"
          value={searchQuery}
          onChange={handleSearch}
        />
        {/* 簡單的放大鏡 Icon */}
        <svg 
          className="absolute right-3 top-3.5 h-5 w-5 text-gray-400 sm:left-[26rem]" 
          fill="none" viewBox="0 0 24 24" stroke="currentColor"
        >
          <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M21 21l-6-6m2-5a7 7 0 11-14 0 7 7 0 0114 0z" />
        </svg>
      </div>

      {/* 題目卡片網格 (改為渲染 currentProblems) */}
      <div className="grid grid-cols-1 sm:grid-cols-2 md:grid-cols-3 lg:grid-cols-4 gap-4 mb-8">
        {currentProblems.length === 0 ? (
          <p className="text-gray-500 col-span-full">找不到符合條件的題目 🥲</p>
        ) : (
          currentProblems.map((prob) => (
            <Link 
              href={`/problem/${prob.id}`} 
              key={prob.id}
              className="block p-6 bg-white rounded-xl shadow-sm hover:shadow-md hover:-translate-y-1 transition-all border border-gray-100"
            >
              <h2 className="text-2xl font-bold text-blue-600 uppercase mb-2">
                {prob.id}
              </h2>
              <p className="text-gray-400 text-sm">點擊查看解題思路 &rarr;</p>
            </Link>
          ))
        )}
      </div>

      {/* 分頁控制列 (總頁數大於 1 時才顯示) */}
      {totalPages > 1 && (
        <div className="flex items-center justify-center gap-4 mt-8 pt-6 border-t border-gray-200">
          <button
            onClick={() => setCurrentPage(prev => Math.max(prev - 1, 1))}
            disabled={currentPage === 1}
            className="px-4 py-2 rounded-lg font-medium text-gray-700 bg-white border border-gray-300 hover:bg-gray-50 disabled:opacity-50 disabled:cursor-not-allowed transition-colors"
          >
            上一頁
          </button>
          
          <span className="text-gray-600 font-medium">
            第 {currentPage} 頁 / 共 {totalPages} 頁
          </span>

          <button
            onClick={() => setCurrentPage(prev => Math.min(prev + 1, totalPages))}
            disabled={currentPage === totalPages}
            className="px-4 py-2 rounded-lg font-medium text-gray-700 bg-white border border-gray-300 hover:bg-gray-50 disabled:opacity-50 disabled:cursor-not-allowed transition-colors"
          >
            下一頁
          </button>
        </div>
      )}
    </div>
  );
}