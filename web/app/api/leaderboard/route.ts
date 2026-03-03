// web/app/api/leaderboard/route.ts
import { Redis } from '@upstash/redis';
import { NextResponse } from 'next/server';

const redis = Redis.fromEnv();

export async function GET() {
  try {
    // 從 ZSET 撈取分數最高的前 5 名 (0 到 4)，包含分數 (withScores)
    // rev: true 代表由大到小排序
    const rawLeaderboard = await redis.zrange('leaderboard:views', 0, 4, { rev: true, withScores: true });
    
    // Upstash Redis 回傳的格式通常是一維陣列：["a001", 15, "a002", 10, ...]
    // 轉換成前端好用的物件陣列：[{ id: "a001", views: 15 }, ...]
    const leaderboard = [];
    for (let i = 0; i < rawLeaderboard.length; i += 2) {
      leaderboard.push({
        id: String(rawLeaderboard[i]),
        views: Number(rawLeaderboard[i + 1])
      });
    }

    return NextResponse.json({ leaderboard });
  } catch (error) {
    console.error('取得排行榜失敗:', error);
    return NextResponse.json({ error: '無法取得排行榜' }, { status: 500 });
  }
}