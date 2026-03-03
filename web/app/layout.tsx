import type { Metadata } from "next";
import { Geist, Geist_Mono } from "next/font/google";
import "./globals.css";
import { Analytics } from '@vercel/analytics/next';
import { Providers } from "./providers";
import ThemeToggle from "./components/ThemeToggle";

const geistSans = Geist({
  variable: "--font-geist-sans",
  subsets: ["latin"],
});

const geistMono = Geist_Mono({
  variable: "--font-geist-mono",
  subsets: ["latin"],
});

export const metadata: Metadata = {
  title: "ZJ 演算法筆記 | SUNGOD3",
  description: "自動生成的 ZeroJudge 解題紀錄",
};

export default function RootLayout({
  children,
}: Readonly<{
  children: React.ReactNode;
}>) {
  return (
    <html lang="en" suppressHydrationWarning>
      <body
        className={`${geistSans.variable} ${geistMono.variable} antialiased transition-colors duration-300 dark:bg-gray-900 dark:text-gray-100 flex flex-col min-h-screen`}
      >
        <Providers>
          <div className="flex-grow">
            {children}
          </div>
          <footer className="py-6 text-center text-sm text-gray-500 dark:text-gray-400 border-t border-gray-200 dark:border-gray-800 transition-colors duration-300">
            &copy; {new Date().getFullYear()} SUNGOD. All rights reserved.
          </footer>
          <ThemeToggle />
          <Analytics /> 
        </Providers>
      </body>
    </html>
  );
}