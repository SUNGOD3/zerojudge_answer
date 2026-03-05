import fs from 'fs';
import path from 'path';
import { MetadataRoute } from 'next';

//強制 Next.js 在打包 (Build) 階段就執行這支檔案。這樣能保證讀取得到外層的 ../content 資料夾，並直接產生純靜態的 XML。
export const dynamic = 'force-static';

export default function sitemap(): MetadataRoute.Sitemap {
  // 你的 Vercel 部署網址
  const baseUrl = 'https://zerojudge-answer.vercel.app';

  // 加入首頁 (權重最高)
  const routes: MetadataRoute.Sitemap = [
    {
      url: baseUrl,
      lastModified: new Date().toISOString(),
      changeFrequency: 'daily',
      priority: 1.0,
    },
  ];

  // 自動掃描 content 資料夾，將每一題加入 sitemap
  const contentDir = path.join(process.cwd(), '../content');
  
  if (fs.existsSync(contentDir)) {
    const files = fs.readdirSync(contentDir);
    files
      .filter(file => file.endsWith('.md'))
      .forEach(file => {
        const id = file.replace('.md', '');
        
        // 取得檔案的最後修改時間，讓 Google 知道這題有沒有更新過
        const filePath = path.join(contentDir, file);
        const stats = fs.statSync(filePath);
        
        routes.push({
          url: `${baseUrl}/problem/${id}`,
          lastModified: stats.mtime.toISOString(),
          changeFrequency: 'weekly',
          priority: 0.8, // 內頁的權重稍微低於首頁
        });
      });
  }

  return routes;
}
