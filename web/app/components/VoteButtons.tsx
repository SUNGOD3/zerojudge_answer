// web/app/components/VoteButtons.tsx
"use client";

import { useEffect, useState } from "react";

export default function VoteButtons({ id }: { id: string }) {
  const [likes, setLikes] = useState<number>(0);
  const [dislikes, setDislikes] = useState<number>(0);
  const [userVote, setUserVote] = useState<'like' | 'dislike' | null>(null);
  const [isLoading, setIsLoading] = useState(true);

  useEffect(() => {
    const fetchVotes = async () => {
      try {
        const res = await fetch(`/api/vote?id=${id}`);
        const data = await res.json();
        setLikes(data.likes || 0);
        setDislikes(data.dislikes || 0);

        const savedVote = localStorage.getItem(`voted_${id}`);
        if (savedVote === 'like' || savedVote === 'dislike') {
          setUserVote(savedVote);
        }
      } catch (error) {
        console.error("無法取得評價資料", error);
      } finally {
        setIsLoading(false);
      }
    };

    fetchVotes();
  }, [id]);

  const handleVote = async (targetType: 'like' | 'dislike') => {
    if (isLoading) return;

    // 情況 1：使用者想「收回」原本的評價 (點擊已經選中的按鈕)
    if (userVote === targetType) {
      setUserVote(null);
      if (targetType === 'like') setLikes(prev => Math.max(0, prev - 1));
      else setDislikes(prev => Math.max(0, prev - 1));
      
      localStorage.removeItem(`voted_${id}`);
      
      fetch("/api/vote", {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({ id, type: targetType, action: 'remove' }),
      }).catch(console.error);
      return;
    }

    // 情況 2：使用者想「切換」評價 (例如原本按讚，改按倒讚)
    if (userVote !== null && userVote !== targetType) {
      if (userVote === 'like') setLikes(prev => Math.max(0, prev - 1));
      else setDislikes(prev => Math.max(0, prev - 1));
      
      if (targetType === 'like') setLikes(prev => prev + 1);
      else setDislikes(prev => prev + 1);
      
      setUserVote(targetType);
      localStorage.setItem(`voted_${id}`, targetType);

      // 背景發送兩次請求：先收回舊的，再增加新的
      Promise.all([
        fetch("/api/vote", {
          method: "POST",
          headers: { "Content-Type": "application/json" },
          body: JSON.stringify({ id, type: userVote, action: 'remove' }),
        }),
        fetch("/api/vote", {
          method: "POST",
          headers: { "Content-Type": "application/json" },
          body: JSON.stringify({ id, type: targetType, action: 'add' }),
        })
      ]).catch(console.error);
      return;
    }

    // 情況 3：使用者第一次投票
    setUserVote(targetType);
    if (targetType === 'like') setLikes(prev => prev + 1);
    else setDislikes(prev => prev + 1);
    
    localStorage.setItem(`voted_${id}`, targetType);

    fetch("/api/vote", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify({ id, type: targetType, action: 'add' }),
    }).catch(console.error);
  };

  if (isLoading) {
    return <div className="flex gap-2 animate-pulse bg-gray-100 dark:bg-gray-800 h-8 w-24 rounded-lg"></div>;
  }

  return (
    <div className="flex items-center gap-1 bg-gray-50 dark:bg-gray-800/50 p-1 rounded-lg border border-gray-200 dark:border-gray-700 transition-colors">
      <button
        onClick={() => handleVote('like')}
        className={`flex items-center gap-1.5 px-3 py-1.5 rounded-md text-sm font-medium transition-all ${
          userVote === 'like' 
            ? 'bg-green-100 text-green-700 dark:bg-green-900/40 dark:text-green-400 shadow-sm' 
            : 'text-gray-500 hover:bg-gray-200 dark:text-gray-400 dark:hover:bg-gray-700'
        }`}
      >
        <svg className="w-4 h-4" fill={userVote === 'like' ? 'currentColor' : 'none'} viewBox="0 0 24 24" stroke="currentColor">
          <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M14 10h4.764a2 2 0 011.789 2.894l-3.5 7A2 2 0 0115.263 21h-4.017c-.163 0-.326-.02-.485-.06L7 20m7-10V5a2 2 0 00-2-2h-.095c-.5 0-.905.405-.905.905 0 .714-.211 1.412-.608 2.006L7 11v9m7-10h-2M7 20H5a2 2 0 01-2-2v-6a2 2 0 012-2h2.5" />
        </svg>
        {likes}
      </button>
      
      <div className="w-px h-4 bg-gray-300 dark:bg-gray-600"></div>

      <button
        onClick={() => handleVote('dislike')}
        className={`flex items-center gap-1.5 px-3 py-1.5 rounded-md text-sm font-medium transition-all ${
          userVote === 'dislike' 
            ? 'bg-red-100 text-red-700 dark:bg-red-900/40 dark:text-red-400 shadow-sm' 
            : 'text-gray-500 hover:bg-gray-200 dark:text-gray-400 dark:hover:bg-gray-700'
        }`}
      >
        <svg className="w-4 h-4 transform rotate-180" fill={userVote === 'dislike' ? 'currentColor' : 'none'} viewBox="0 0 24 24" stroke="currentColor">
          <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M14 10h4.764a2 2 0 011.789 2.894l-3.5 7A2 2 0 0115.263 21h-4.017c-.163 0-.326-.02-.485-.06L7 20m7-10V5a2 2 0 00-2-2h-.095c-.5 0-.905.405-.905.905 0 .714-.211 1.412-.608 2.006L7 11v9m7-10h-2M7 20H5a2 2 0 01-2-2v-6a2 2 0 012-2h2.5" />
        </svg>
        {dislikes}
      </button>
    </div>
  );
}