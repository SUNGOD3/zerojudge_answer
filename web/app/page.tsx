import fs from 'fs';
import path from 'path';
import Link from 'next/link';

export default function Home() {
  // 1. 定義 content 資料夾的路徑 
  // Next.js 執行在 web/ 目錄下，所以我們用 '../content' 回退一層找到生成的 md 檔
  const contentDir = path.join(process.cwd(), '../content');
  
  // 2. 讀取資料夾內所有的 .md 檔案
  let problems: { id: string }[] = [];
  
  if (fs.existsSync(contentDir)) {
    const files = fs.readdirSync(contentDir);
    problems = files
      .filter(file => file.endsWith('.md'))
      .map(file => {
        // 把檔名 a001.md 變成 a001
        const id = file.replace('.md', '');
        return { id };
      })
      // 簡單按題號字母順序排序
      .sort((a, b) => a.id.localeCompare(b.id));
  }

  // 3. 使用 Tailwind CSS 渲染畫面
  return (
    <main className="min-h-screen bg-gray-50 p-8 font-sans">
      <div className="max-w-5xl mx-auto">
        <header className="mb-12 border-b pb-6">
          <h1 className="text-4xl font-bold text-gray-900 mb-3">ZJ 題解畫廊</h1>
          <p className="text-gray-600">自動生成的 ZeroJudge C++ 解題紀錄</p>
        </header>

        <div className="grid grid-cols-1 sm:grid-cols-2 md:grid-cols-3 lg:grid-cols-4 gap-4">
          {problems.length === 0 ? (
            <p className="text-gray-500 col-span-full">目前還沒有生成的題解，請先執行 Python 腳本喔！</p>
          ) : (
            problems.map((prob) => (
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
    </main>
  );
}