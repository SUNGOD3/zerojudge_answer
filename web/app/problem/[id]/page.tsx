import fs from 'fs';
import path from 'path';
import Link from 'next/link';
import ReactMarkdown from 'react-markdown';
import remarkGfm from 'remark-gfm';
import rehypeHighlight from 'rehype-highlight';
import 'highlight.js/styles/github-dark.css';

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

// 注意這裡：params 變成 Promise，並且加上了 async
export default async function ProblemPage({ params }: { params: Promise<{ id: string }> }) {
  // 注意這裡：必須 await params 才能拿到真實的 id
  const resolvedParams = await params;
  const { id } = resolvedParams;
  
  const filePath = path.join(process.cwd(), '../content', `${id}.md`);
  
  let content = '';
  try {
    content = fs.readFileSync(filePath, 'utf8');
  } catch (e) {
    return (
      <div className="min-h-screen flex items-center justify-center bg-gray-50">
        <div className="text-center text-red-500 text-xl font-bold">
          找不到題目 {id} 的解題紀錄。
        </div>
      </div>
    );
  }

  return (
    <main className="min-h-screen bg-gray-50 py-10 px-4 sm:px-8 font-sans">
      <div className="max-w-4xl mx-auto bg-white p-8 sm:p-12 rounded-2xl shadow-sm border border-gray-100">
        <Link href="/" className="text-blue-600 hover:text-blue-800 font-medium mb-8 inline-block transition-colors">
          &larr; 返回題庫列表
        </Link>
        
        <article className="prose prose-slate lg:prose-lg max-w-none prose-pre:p-0 prose-pre:bg-transparent">
          <ReactMarkdown 
            remarkPlugins={[remarkGfm]} 
            rehypePlugins={[rehypeHighlight]}
          >
            {content}
          </ReactMarkdown>
        </article>
      </div>
    </main>
  );
}