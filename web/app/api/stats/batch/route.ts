// web/app/api/stats/batch/route.ts
import { Redis } from '@upstash/redis';
import { NextResponse } from 'next/server';

const redis = Redis.fromEnv();

export async function POST(req: Request) {
  try {
    const { ids } = await req.json();
    
    if (!Array.isArray(ids) || ids.length === 0) {
      return NextResponse.json({ error: '請提供題目 ID 陣列' }, { status: 400 });
    }

    // 準備 MGET 需要的 Key 陣列
    const viewsKeys = ids.map(id => `views:${id}`);
    const likesKeys = ids.map(id => `likes:${id}`);
    const dislikesKeys = ids.map(id => `dislikes:${id}`);

    // 平行發送 3 個 MGET 請求給 Redis，極致榨出效能
    const [viewsData, likesData, dislikesData] = await Promise.all([
      redis.mget<number[]>(...viewsKeys),
      redis.mget<number[]>(...likesKeys),
      redis.mget<number[]>(...dislikesKeys),
    ]);

    // 將陣列組裝成前端好用的 Map 物件：{ "a001": { views: 42, likes: 5, dislikes: 0 } }
    const statsMap: Record<string, { views: number; likes: number; dislikes: number }> = {};
    
    ids.forEach((id, index) => {
      statsMap[id] = {
        views: Number(viewsData[index]) || 0,
        likes: Number(likesData[index]) || 0,
        dislikes: Number(dislikesData[index]) || 0,
      };
    });

    return NextResponse.json({ stats: statsMap });
  } catch (error) {
    console.error('批次讀取失敗:', error);
    return NextResponse.json({ error: '伺服器錯誤' }, { status: 500 });
  }
}