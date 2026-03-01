import fs from 'fs';
import path from 'path';
import Link from 'next/link';
import ProblemList from './components/ProblemList';

async function getGithubStars() {
  try {
    // 設定 revalidate: 3600 代表這筆資料會被快取 1 小時 (3600 秒)
    const res = await fetch('https://api.github.com/repos/SUNGOD3/zerojudge_answer', {
      next: { revalidate: 3600 }
    });
    if (!res.ok) return 0;
    const data = await res.json();
    return data.stargazers_count;
  } catch (e) {
    return 0;
  }
}

export default async function Home() {
  const contentDir = path.join(process.cwd(), '../content');
  let problems: { id: string }[] = [];
  
  if (fs.existsSync(contentDir)) {
    const files = fs.readdirSync(contentDir);
    problems = files
      .filter(file => file.endsWith('.md'))
      .map(file => ({ id: file.replace('.md', '') }))
      .sort((a, b) => a.id.localeCompare(b.id));
  }

  const stars = await getGithubStars();

  return (
    <main className="min-h-screen bg-gray-50 p-8 font-sans">
      <div className="max-w-5xl mx-auto">
        <header className="mb-12 border-b pb-6 flex flex-col sm:flex-row sm:items-end justify-between gap-4">
          <div>
            <h1 className="text-4xl font-bold text-gray-900 mb-3">ZJ 題解畫廊</h1>
            <p className="text-gray-600">自動生成的 ZeroJudge C++ 解題紀錄</p>
          </div>
          
          <a 
            href="https://github.com/SUNGOD3/zerojudge_answer" 
            target="_blank" 
            rel="noopener noreferrer"
            className="inline-flex items-center gap-2 bg-gray-900 text-white px-4 py-2 rounded-lg font-medium hover:bg-gray-800 transition-colors"
          >
            <svg viewBox="0 0 16 16" width="16" height="16" fill="currentColor"><path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25Z"></path></svg>
            <span>Star {stars}</span>
          </a>
        </header>

        <ProblemList problems={problems} />
      </div>
    </main>
  );
}