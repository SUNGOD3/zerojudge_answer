import { MetadataRoute } from 'next';

export default function robots(): MetadataRoute.Robots {
  return {
    rules: {
      // 允許所有搜尋引擎的爬蟲 (Google, Bing 等) 進入
      userAgent: '*',
      allow: '/',
    },
    sitemap: 'https://zerojudge-answer.vercel.app/sitemap.xml',
  };
}