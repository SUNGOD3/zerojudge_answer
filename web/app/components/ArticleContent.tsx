"use client";

import { useState, useEffect, useRef } from 'react';
import ReactMarkdown from 'react-markdown';
import remarkGfm from 'remark-gfm';
import rehypeHighlight from 'rehype-highlight';
import 'highlight.js/styles/github-dark.css';

export default function ArticleContent({ content }: { content: string }) {
  const [readingProgress, setReadingProgress] = useState(0);

  useEffect(() => {
    const updateScroll = () => {
      const currentScrollY = window.scrollY;
      const scrollHeight = document.documentElement.scrollHeight - window.innerHeight;
      if (scrollHeight) {
        setReadingProgress(Number(((currentScrollY / scrollHeight) * 100).toFixed(2)));
      }
    };
    
    window.addEventListener("scroll", updateScroll);
    return () => window.removeEventListener("scroll", updateScroll);
  }, []);

  const PreWithCopy = ({ children, ...props }: any) => {
    const preRef = useRef<HTMLPreElement>(null);
    const [copied, setCopied] = useState(false);

    const handleCopy = () => {
      if (preRef.current) {
        const text = preRef.current.innerText;
        navigator.clipboard.writeText(text);
        setCopied(true);
        setTimeout(() => setCopied(false), 2000);
      }
    };

    return (
      <div className="relative group my-6">
        <button
          onClick={handleCopy}
          className="absolute right-2 top-2 px-3 py-1.5 bg-gray-700/80 hover:bg-gray-600 text-gray-200 text-sm font-medium rounded-lg opacity-0 group-hover:opacity-100 transition-all duration-200 z-10"
        >
          {copied ? "已複製! ✨" : "複製代碼"}
        </button>
        <pre ref={preRef} className="!mt-0" {...props}>
          {children}
        </pre>
      </div>
    );
  };

  return (
    <>
      <div 
        className="fixed top-0 left-0 h-1.5 bg-blue-500 z-50 transition-all duration-150 ease-out"
        style={{ width: `${readingProgress}%` }}
      />

      <article className="prose prose-slate dark:prose-invert lg:prose-lg max-w-none prose-pre:p-0 prose-pre:bg-transparent transition-colors duration-300">
        <ReactMarkdown 
          remarkPlugins={[remarkGfm]} 
          rehypePlugins={[rehypeHighlight]}
          components={{
            pre: PreWithCopy
          }}
        >
          {content}
        </ReactMarkdown>
      </article>
    </>
  );
}