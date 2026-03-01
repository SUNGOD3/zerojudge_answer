"use client"; // 宣告這是客戶端元件，可以使用 useState 等互動功能

import { useState } from 'react';
import Link from 'next/link';

export default function ProblemList({ problems }: { problems: { id: string }[] }) {
  // 建立搜尋字串的狀態
  const [searchQuery, setSearchQuery] = useState('');

  // 根據搜尋字串過濾題目
  const filteredProblems = problems.filter(prob =>
    prob.id.toLowerCase().includes(searchQuery.toLowerCase())
  );

  return (
    <div>
      {/* 搜尋輸入框 */}
      <div className="mb-8 relative">
        <input
          type="text"
          placeholder="搜尋題號 (例如 a001)..."
          className="w-full sm:max-w-md pl-4 pr-10 py-3 rounded-xl border border-gray-200 bg-white text-gray-900 placeholder-gray-400 focus:outline-none focus:ring-2 focus:ring-blue-500 shadow-sm transition-all"
          value={searchQuery}
          onChange={(e) => setSearchQuery(e.target.value)}
        />
        {/* 簡單的放大鏡 Icon */}
        <svg 
          className="absolute right-3 top-3.5 h-5 w-5 text-gray-400 sm:left-[26rem]" 
          fill="none" viewBox="0 0 24 24" stroke="currentColor"
        >
          <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M21 21l-6-6m2-5a7 7 0 11-14 0 7 7 0 0114 0z" />
        </svg>
      </div>

      {/* 題目卡片網格 */}
      <div className="grid grid-cols-1 sm:grid-cols-2 md:grid-cols-3 lg:grid-cols-4 gap-4">
        {filteredProblems.length === 0 ? (
          <p className="text-gray-500 col-span-full">找不到符合條件的題目 🥲</p>
        ) : (
          filteredProblems.map((prob) => (
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
    </div>
  );
}