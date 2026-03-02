// web/app/components/Leaderboard.tsx
"use client";

import { useEffect, useState } from "react";
import Link from "next/link";

interface LeaderboardItem {
  id: string;
  views: number;
}

export default function Leaderboard() {
  const [topProblems, setTopProblems] = useState<LeaderboardItem[]>([]);
  const [loading, setLoading] = useState(true);

  useEffect(() => {
    const fetchLeaderboard = async () => {
      try {
        const res = await fetch("/api/leaderboard");
        const data = await res.json();
        if (data.leaderboard) {
          setTopProblems(data.leaderboard);
        }
      } catch (error) {
        console.error("無法取得排行榜", error);
      } finally {
        setLoading(false);
      }
    };

    fetchLeaderboard();
  }, []);

  if (loading) {
    return <div className="animate-pulse h-24 bg-gray-100 dark:bg-gray-800 rounded-xl mb-8"></div>;
  }

  if (topProblems.length === 0) return null;

  return (
    <div className="mb-8 p-6 bg-gradient-to-br from-indigo-50 to-blue-50 dark:from-indigo-900/20 dark:to-blue-900/20 border border-indigo-100 dark:border-indigo-800/50 rounded-2xl shadow-sm transition-colors">
      <h2 className="text-lg font-bold text-indigo-900 dark:text-indigo-200 mb-4 flex items-center gap-2">
        <svg className="w-5 h-5 text-yellow-500" fill="currentColor" viewBox="0 0 20 20">
          <path d="M9.049 2.927c.3-.921 1.603-.921 1.902 0l1.07 3.292a1 1 0 00.95.69h3.462c.969 0 1.371 1.24.588 1.81l-2.8 2.034a1 1 0 00-.364 1.118l1.07 3.292c.3.921-.755 1.688-1.54 1.118l-2.8-2.034a1 1 0 00-1.175 0l-2.8 2.034c-.784.57-1.838-.197-1.539-1.118l1.07-3.292a1 1 0 00-.364-1.118L2.98 8.72c-.783-.57-.38-1.81.588-1.81h3.461a1 1 0 00.951-.69l1.07-3.292z" />
        </svg>
        全站熱門 Top 5
      </h2>
      <div className="flex flex-wrap gap-3">
        {topProblems.map((prob, index) => (
          <Link
            key={prob.id}
            href={`/problem/${prob.id}`}
            className="flex items-center gap-2 px-4 py-2 bg-white dark:bg-gray-800 border border-indigo-100 dark:border-indigo-700/50 rounded-lg hover:border-indigo-300 dark:hover:border-indigo-500 hover:shadow-md transition-all"
          >
            <span className={`text-sm font-bold ${index === 0 ? 'text-yellow-500' : index === 1 ? 'text-gray-400' : index === 2 ? 'text-amber-700' : 'text-gray-500 dark:text-gray-400'}`}>
              #{index + 1}
            </span>
            <span className="font-semibold text-gray-800 dark:text-gray-200 uppercase">{prob.id}</span>
            <span className="text-xs text-gray-500 dark:text-gray-400 bg-gray-100 dark:bg-gray-700 px-2 py-0.5 rounded-full">
              {prob.views} 次
            </span>
          </Link>
        ))}
      </div>
    </div>
  );
}