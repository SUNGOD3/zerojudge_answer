import type { Metadata } from "next";
import { Geist, Geist_Mono } from "next/font/google";
import "./globals.css";
import { Analytics } from '@vercel/analytics/react';
import { Providers } from "./providers"; // 引入我們寫好的 Provider
import ThemeToggle from "./components/ThemeToggle"; // 引入切換按鈕

const geistSans = Geist({
  variable: "--font-geist-sans",
  subsets: ["latin"],
});

const geistMono = Geist_Mono({
  variable: "--font-geist-mono",
  subsets: ["latin"],
});

export const metadata: Metadata = {
  title: "ZJ 題解畫廊 | SUNGOD3",
  description: "自動生成的 ZeroJudge C++ 解題紀錄",
};

export default function RootLayout({
  children,
}: Readonly<{
  children: React.ReactNode;
}>) {
  return (
    <html lang="en" suppressHydrationWarning>
      <body
        className={`${geistSans.variable} ${geistMono.variable} antialiased transition-colors duration-300 dark:bg-gray-900 dark:text-gray-100`}
      >
        <Providers>
          {children}
          <ThemeToggle />
          <Analytics /> 
        </Providers>
      </body>
    </html>
  );
}