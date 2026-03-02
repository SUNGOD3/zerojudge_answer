# ZeroJudge Answer Gallery

An automated data pipeline and static site project that transforms 1,000+ personal Accepted (AC) C++ solutions from ZeroJudge (ZJ) into a structured, easily navigable, and SEO-friendly portfolio.

## Links
- **My ZeroJudge Profile:** [UserStatistic?id=95834](https://zerojudge.tw/UserStatistic?id=95834)
- **Live Demo:** [zerojudge-answer.vercel.app](https://zerojudge-answer.vercel.app/)

## What is ZeroJudge?
ZeroJudge is a popular Taiwanese online judge system primarily used by high school students to practice algorithmic problem-solving. However, it contains a vast repository of problems, many of which involve complex data structures and algorithms that even college students find challenging.

---

## 🚀 Key Features

### Frontend (User Experience)
- **LeetCode-Style Tags & Filtering:** Automatically extracts algorithm tags (e.g., DP, DFS, Greedy) and displays top trending topics.
- **Similar Problems Recommendation:** Calculates tag intersections to recommend the Top 4 related problems on each solution page.
- **Advanced Search:** Supports searching by both Problem ID and Chinese Title.
- **Optimized Reading Experience:** Features a sticky reading progress bar and one-click "Copy Code" functionality.
- **Dark Mode:** Seamless theme switching powered by Tailwind CSS v4 and `next-themes`.
- **High Performance:** Paginated card grid and fully pre-rendered static pages (SSG).

### Backend (Data Pipeline)
- **Robust Encoding Fallback:** Intelligently handles legacy C++ files saved in Windows `Big5` encoding, gracefully falling back to UTF-8 to prevent decode errors.
- **AI Rate Limit Handling:** Implements exponential backoff and sleep mechanisms to safely navigate LLM API constraints (e.g., `429 Too Many Requests`).
- **Structured Data Generation:** Prompts the LLM to generate strict YAML Frontmatter alongside Markdown content for seamless frontend parsing.

---

## 🏗 System Architecture

This project is decoupled into two main modules: the **Backend Data Pipeline** (data extraction and content generation) and the **Frontend Static Site** (display and UI).

### 1. Backend Data Pipeline (Python & Gemini API)
Responsible for converting raw `.cpp` solution files into comprehensive `.md` (Markdown) articles.

* **Scraper Module (`scraper.py`)**: 
    * Fetches problem descriptions and metadata directly from ZeroJudge.
    * Validates text length to handle image/PDF-only problem statements gracefully.
* **LLM Generator Module (`generator.py`)**: 
    * Constructs highly constrained prompts combining the ZJ problem context and the raw C++ code.
    * Calls the Gemini API to generate structured explanations, complexity analysis, and LeetCode-style algorithm tags in YAML Frontmatter.
* **Controller (`main.py`)**: 
    * Manages batch processing, incremental generation (skipping existing files), and robust error handling (API rate limiting and encoding issues).

### 2. Frontend & Hosting (Next.js 15 + React)
A purely static frontend that parses the generated Markdown files and renders the user interface.

* **Core Framework**: Next.js (App Router) with Static Site Generation (SSG). Pre-renders all 1,000+ solutions into static HTML at build time for maximum performance and SEO.
* **Content Parsing**: Utilizes `gray-matter` for metadata extraction and `react-markdown` for code syntax highlighting.
* **Styling**: Tailwind CSS v4.
* **Deployment**: Automatically built and deployed via CI/CD pipelines.

---

## 📁 Directory Structure

```text
zerojudge_answer/
├── .github/
│   └── workflows/         # CI/CD pipelines (Automated generation via Actions)
├── scripts/               # Python data pipeline scripts
│   ├── main.py            # Pipeline controller & Batch processor
│   ├── scraper.py         # Web scraping logic
│   ├── generator.py       # LLM API integration & Prompt engineering
│   └── validator.py       # Output validation
├── answers_raw/           # Raw C++ solutions (e.g., a001.cpp, encoded in UTF-8/Big5)
├── content/               # Generated Markdown files with YAML Frontmatter
├── web/                   # Next.js 15 frontend directory
│   ├── app/               # Next.js App Router (Pages, Layout, Globals)
│   ├── components/        # Reusable React components (ProblemList, ArticleContent, etc.)
│   ├── package.json
│   └── next.config.ts
└── README.md              # This file

```

## 🛠 Development Workflow

1. **Add Solutions**: Drop new `[problem_id].cpp` files into `answers_raw/`.
2. **Push to Trigger (CI/CD)**: Commit and push to the `main` branch.
3. **Automated Pipeline**: GitHub Actions detects changes in `answers_raw/`, executes the Python pipeline to generate new `.md` files, and automatically commits them back to the repository.
4. **Site Rebuild**: The static site hosting platform detects the new Markdown content and automatically rebuilds the frontend.

