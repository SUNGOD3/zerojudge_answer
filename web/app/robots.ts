import { MetadataRoute } from 'next';

export default function robots(): MetadataRoute.Robots {
  return {
    rules: {
      // 允許所有搜尋引擎的爬蟲 (Google, Bing 等) 進入
      userAgent: '*',
      allow: '/',
    },
    // 主動告訴爬蟲你的 Sitemap 在哪裡
    sitemap: 'https://zerojudge-answer.vercel.app/sitemap.xml',
  };
}