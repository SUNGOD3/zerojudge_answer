// web/app/api/vote/route.ts
import { Redis } from '@upstash/redis';
import { NextResponse } from 'next/server';

const redis = Redis.fromEnv();

// 讀取某題的讚/倒讚數
export async function GET(req: Request) {
  try {
    const { searchParams } = new URL(req.url);
    const id = searchParams.get('id');
    
    if (!id) return NextResponse.json({ error: '缺少題目 ID' }, { status: 400 });

    const pipeline = redis.pipeline();
    pipeline.get(`likes:${id}`);
    pipeline.get(`dislikes:${id}`);
    const results = await pipeline.exec();

    return NextResponse.json({ 
      likes: Number(results[0]) || 0, 
      dislikes: Number(results[1]) || 0 
    });
  } catch (error) {
    return NextResponse.json({ error: '讀取失敗' }, { status: 500 });
  }
}

// 寫入投票 (支援增加與收回)
export async function POST(req: Request) {
  try {
    const body = await req.json();
    const { id, type, action } = body; // action 會是 'add' 或 'remove'
    
    if (!id || (type !== 'like' && type !== 'dislike') || (action !== 'add' && action !== 'remove')) {
      return NextResponse.json({ error: '參數錯誤' }, { status: 400 });
    }

    const key = type === 'like' ? `likes:${id}` : `dislikes:${id}`;
    let newValue;

    if (action === 'remove') {
      // 防呆：確保數字不會被扣到變負數
      const current = Number(await redis.get(key)) || 0;
      if (current > 0) {
        newValue = await redis.decr(key);
      } else {
        newValue = 0;
      }
    } else {
      newValue = await redis.incr(key);
    }
    
    return NextResponse.json({ success: true, newValue });
  } catch (error) {
    return NextResponse.json({ error: '寫入失敗' }, { status: 500 });
  }
}