// web/app/api/views/route.ts
import { Redis } from '@upstash/redis';
import { NextResponse } from 'next/server';

const redis = Redis.fromEnv();

// 只讀取觀看次數 (不增加)
export async function GET(req: Request) {
  try {
    const { searchParams } = new URL(req.url);
    const id = searchParams.get('id');
    
    if (!id) return NextResponse.json({ error: '缺少題目 ID' }, { status: 400 });

    const views = await redis.get(`views:${id}`);
    return NextResponse.json({ views: views || 0 });
  } catch (error) {
    console.error('Redis 讀取失敗:', error);
    return NextResponse.json({ error: '無法取得觀看次數' }, { status: 500 });
  }
}

// 增加觀看次數 (並同時更新排行榜)
export async function POST(req: Request) {
  try {
    const body = await req.json();
    const { id } = body;
    
    if (!id) return NextResponse.json({ error: '缺少題目 ID' }, { status: 400 });

    // 💡 關鍵魔法：使用 Pipeline 一次執行兩個動作
    const pipeline = redis.pipeline();
    pipeline.incr(`views:${id}`); // 單題計數器 +1
    pipeline.zincrby('leaderboard:views', 1, id); // 排行榜總分 +1
    
    const results = await pipeline.exec();
    
    // results[0] 會是 incr 的結果 (最新觀看數)
    return NextResponse.json({ views: results[0] });
  } catch (error) {
    console.error('Redis 寫入失敗:', error);
    return NextResponse.json({ error: '無法更新觀看次數' }, { status: 500 });
  }
}