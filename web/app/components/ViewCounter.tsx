// web/app/components/ViewCounter.tsx
"use client";

import { useEffect, useState, useRef } from "react";

export default function ViewCounter({ id }: { id: string }) {
  const [views, setViews] = useState<number | null>(null);
  const hasFetched = useRef(false);

  useEffect(() => {
    if (hasFetched.current) return;
    hasFetched.current = true;

    const fetchViews = async () => {
      try {
        // 去瀏覽器記憶體檢查：這個人剛才有沒有看過這題了？
        const hasViewed = sessionStorage.getItem(`viewed_${id}`);

        if (hasViewed) {
          // 已經看過了，乖乖用 GET 拿數字就好，不要 +1
          const res = await fetch(`/api/views?id=${id}`);
          const data = await res.json();
          if (data.views !== undefined) setViews(data.views);
        } else {
          // 第一次看，用 POST 讓資料庫 +1
          const res = await fetch("/api/views", {
            method: "POST",
            headers: { "Content-Type": "application/json" },
            body: JSON.stringify({ id }),
          });
          const data = await res.json();
          if (data.views !== undefined) {
            setViews(data.views);
            // 寫入記憶體，發給他一張「已觀看」的通行證
            sessionStorage.setItem(`viewed_${id}`, "true");
          }
        }
      } catch (error) {
        console.error("無法取得觀看次數", error);
      }
    };

    fetchViews();
  }, [id]);

  if (views === null) {
    return <span className="text-sm text-gray-400 dark:text-gray-500 animate-pulse">計算中...</span>;
  }

  return (
    <span className="text-sm font-medium text-gray-500 dark:text-gray-400 flex items-center gap-1 transition-colors">
      <svg className="w-4 h-4" fill="none" viewBox="0 0 24 24" stroke="currentColor">
        <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M15 12a3 3 0 11-6 0 3 3 0 016 0z" />
        <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M2.458 12C3.732 7.943 7.523 5 12 5c4.478 0 8.268 2.943 9.542 7-1.274 4.057-5.064 7-9.542 7-4.477 0-8.268-2.943-9.542-7z" />
      </svg>
      {views} 次觀看
    </span>
  );
}