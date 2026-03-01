import fs from 'fs';
import path from 'path';
import matter from 'gray-matter';
import ProblemList from './components/ProblemList';

async function getGithubStars() {
  try {
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
  let problems: { id: string; title: string; tags: string[] }[] = [];
  
  if (fs.existsSync(contentDir)) {
    const files = fs.readdirSync(contentDir);
    problems = files
      .filter(file => file.endsWith('.md'))
      .map(file => {
        const id = file.replace('.md', '');
        const filePath = path.join(contentDir, file);
        const fileContent = fs.readFileSync(filePath, 'utf8');
        const { data } = matter(fileContent);
        
        return { 
          id, 
          title: data.title || '未知題目',
          tags: data.tags || []
        };
      })
      .sort((a, b) => a.id.localeCompare(b.id));
  }

  const stars = await getGithubStars();

  return (
    <main className="min-h-screen bg-gray-50 dark:bg-gray-900 p-8 font-sans transition-colors duration-300">
      <div className="max-w-5xl mx-auto">
        <header className="mb-12 border-b border-gray-200 dark:border-gray-800 pb-6 flex flex-col sm:flex-row sm:items-end justify-between gap-4">
          <div>
            <h1 className="text-4xl font-bold text-gray-900 dark:text-white mb-3 transition-colors">ZJ 題解畫廊</h1>
            <p className="text-gray-600 dark:text-gray-400 transition-colors">自動生成的 ZeroJudge C++ 解題紀錄</p>
          </div>
          
          <a 
            href="https://github.com/SUNGOD3/zerojudge_answer" 
            target="_blank" 
            rel="noopener noreferrer"
            className="inline-flex items-center gap-2 bg-gray-900 dark:bg-gray-800 text-white px-4 py-2 rounded-lg font-medium hover:bg-gray-800 dark:hover:bg-gray-700 transition-colors"
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