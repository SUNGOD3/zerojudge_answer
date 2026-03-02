import fs from 'fs';
import path from 'path';
import Link from 'next/link';
import matter from 'gray-matter';
import Comments from '../../components/Comments';
import ArticleContent from '../../components/ArticleContent';

export async function generateStaticParams() {
  const contentDir = path.join(process.cwd(), '../content');
  if (!fs.existsSync(contentDir)) return [];
  
  const files = fs.readdirSync(contentDir);
  return files
    .filter(file => file.endsWith('.md'))
    .map(file => ({
      id: file.replace('.md', ''),
    }));
}

export default async function ProblemPage({ params }: { params: Promise<{ id: string }> }) {
  const resolvedParams = await params;
  const { id } = resolvedParams;
  
  const contentDir = path.join(process.cwd(), '../content');
  const filePath = path.join(contentDir, `${id}.md`);
  
  let rawContent = '';
  try {
    rawContent = fs.readFileSync(filePath, 'utf8');
  } catch (e) {
    return (
      <div className="min-h-screen flex items-center justify-center bg-gray-50 dark:bg-gray-900 transition-colors duration-300">
        <div className="text-center text-red-500 text-xl font-bold">
          找不到題目 {id} 的解題紀錄。
        </div>
      </div>
    );
  }

  const parsed = matter(rawContent);
  const content = parsed.content;
  const currentTags: string[] = parsed.data.tags || [];

  let similarProblems: { id: string; matchCount: number }[] = [];
  let prevId: string | null = null;
  let nextId: string | null = null;
  
  if (fs.existsSync(contentDir)) {
    const files = fs.readdirSync(contentDir);
    
    // 計算相似題目
    if (currentTags.length > 0) {
      similarProblems = files
        .filter(file => file.endsWith('.md') && file !== `${id}.md`)
        .map(file => {
          const fPath = path.join(contentDir, file);
          const fContent = fs.readFileSync(fPath, 'utf8');
          const fTags: string[] = matter(fContent).data.tags || [];
          
          const matchCount = currentTags.filter(tag => fTags.includes(tag)).length;
          return { id: file.replace('.md', ''), matchCount };
        })
        .filter(p => p.matchCount > 0)
        .sort((a, b) => b.matchCount - a.matchCount || a.id.localeCompare(b.id))
        .slice(0, 4);
    }

    // 計算上一題與下一題 (依據字典序排序)
    const sortedFiles = files
      .filter(f => f.endsWith('.md'))
      .map(f => f.replace('.md', ''))
      .sort((a, b) => a.localeCompare(b));
    
    const currentIndex = sortedFiles.indexOf(id);
    if (currentIndex > 0) prevId = sortedFiles[currentIndex - 1];
    if (currentIndex < sortedFiles.length - 1) nextId = sortedFiles[currentIndex + 1];
  }

  return (
    <main className="min-h-screen bg-gray-50 dark:bg-gray-900 py-10 px-4 sm:px-8 font-sans relative transition-colors duration-300">
      <div className="max-w-4xl mx-auto bg-white dark:bg-gray-800 p-8 sm:p-12 rounded-2xl shadow-sm border border-gray-100 dark:border-gray-700 transition-colors duration-300">
        <Link href="/" className="text-blue-600 dark:text-blue-400 hover:text-blue-800 dark:hover:text-blue-300 font-medium mb-8 inline-block transition-colors">
          &larr; 返回題庫列表
        </Link>
        
        {currentTags.length > 0 && (
          <div className="mb-8 flex flex-wrap gap-2">
            {currentTags.map(tag => (
              <span key={tag} className="px-3 py-1 bg-blue-50 dark:bg-blue-900/30 text-blue-600 dark:text-blue-300 rounded-full text-sm font-semibold border border-blue-100 dark:border-blue-800/50 transition-colors">
                # {tag}
              </span>
            ))}
          </div>
        )}

        <ArticleContent content={content} />

        {similarProblems.length > 0 && (
          <div className="mt-16 mb-8 pt-8 border-t border-gray-100 dark:border-gray-700 transition-colors">
            <h3 className="text-xl font-bold text-gray-800 dark:text-gray-200 mb-6 flex items-center gap-2 transition-colors">
              <svg className="w-6 h-6 text-blue-500" fill="none" viewBox="0 0 24 24" stroke="currentColor">
                <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M13.828 10.172a4 4 0 00-5.656 0l-4 4a4 4 0 105.656 5.656l1.102-1.101m-.758-4.899a4 4 0 005.656 0l4-4a4 4 0 00-5.656-5.656l-1.1 1.1" />
              </svg>
              相似題目 (Similar Problems)
            </h3>
            <div className="grid grid-cols-1 sm:grid-cols-2 gap-4">
              {similarProblems.map(sp => (
                <Link 
                  key={sp.id} 
                  href={`/problem/${sp.id}`} 
                  className="block p-5 rounded-xl border border-gray-200 dark:border-gray-700 hover:border-blue-500 dark:hover:border-blue-500 bg-white dark:bg-gray-800 hover:shadow-md transition-all group"
                >
                  <div className="text-lg font-bold text-gray-800 dark:text-gray-200 group-hover:text-blue-600 dark:group-hover:text-blue-400 transition-colors uppercase">{sp.id}</div>
                  <div className="text-sm text-gray-500 dark:text-gray-400 mt-2 transition-colors">共有 {sp.matchCount} 個相同考點</div>
                </Link>
              ))}
            </div>
          </div>
        )}

        {/* 新增的上一題 / 下一題導覽列 */}
        <div className="flex flex-col sm:flex-row justify-between items-center gap-4 mt-12 mb-8 pt-8 border-t border-gray-100 dark:border-gray-700">
          {prevId ? (
            <Link 
              href={`/problem/${prevId}`}
              className="w-full sm:w-auto px-6 py-3 bg-gray-50 dark:bg-gray-700/50 hover:bg-gray-100 dark:hover:bg-gray-700 text-gray-700 dark:text-gray-200 rounded-xl font-medium transition-colors text-center"
            >
              &larr; 上一題 <span className="uppercase text-blue-600 dark:text-blue-400 ml-1">{prevId}</span>
            </Link>
          ) : <div className="hidden sm:block"></div>}

          {nextId ? (
            <Link 
              href={`/problem/${nextId}`}
              className="w-full sm:w-auto px-6 py-3 bg-gray-50 dark:bg-gray-700/50 hover:bg-gray-100 dark:hover:bg-gray-700 text-gray-700 dark:text-gray-200 rounded-xl font-medium transition-colors text-center"
            >
              下一題 <span className="uppercase text-blue-600 dark:text-blue-400 mr-1">{nextId}</span> &rarr;
            </Link>
          ) : <div className="hidden sm:block"></div>}
        </div>

        <Comments />
      </div>
    </main>
  );
}