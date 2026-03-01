# ZeroJudge Answer Gallery

An automated data pipeline and static site project that transforms 1,000+ personal Accepted (AC) C++ solutions from ZeroJudge (ZJ) into a structured, easily navigable, and SEO-friendly portfolio.

## What is your ZJ account?
https://zerojudge.tw/UserStatistic?id=95834

## What is zerojudge?
A website for high school students to practice program problem solving, but there are many problems in it that college don't know how to write.

## Problem solving web link
```
https://SUNGOD3.github.io/zerojudge_answer
```


## System Architecture

This project is decoupled into two main modules: the **Backend Data Pipeline** (data extraction and content generation) and the **Frontend Static Site** (display and UI).

### 1. Backend Data Pipeline (Python)
Responsible for converting raw `.cpp` solution files into comprehensive `.md` (Markdown) articles.

* **Scraper Module (`scraper.py`)**: 
    * Reads `[problem_id].cpp` from the repository.
    * Fetches problem descriptions and metadata from ZeroJudge.
    * **Guardrails**: Implements rate limiting (randomized delays) to respect ZJ's server constraints and supports incremental scraping (only processing new files).
* **LLM Generator Module (`generator.py`)**: 
    * Constructs prompts combining the ZJ problem context and the raw C++ code.
    * Calls the LLM API to generate structured explanations, including algorithmic approaches and time/space complexity analysis.
* **Validation Module (`validator.py`)**: The core safety net for handling bulk generation.
    * *Scraping Validation*: Checks the length of the fetched text. If it's too short (e.g., the problem uses PDF images instead of text), it tags the file with `WARN: Missing_Text`.
    * *Generation Validation*: Uses RegEx to ensure the LLM output contains required headers (e.g., `## Approach`, `## Complexity`). 
    * *Output*: Generates a `report.csv` after each run, highlighting specific problem IDs that require manual review.

### 2. Frontend & Hosting (Next.js + React)
A purely static frontend that parses the generated Markdown files and renders the user interface.

* **Core Framework**: Next.js (React) with Static Site Generation (SSG). Pre-renders all 1,000+ solutions into static HTML at build time for maximum performance and SEO.
* **Styling**: Tailwind CSS (with Dark Mode support).
* **Third-Party Integrations**:
    * *Comments*: Giscus (powered by GitHub Discussions).
    * *Repository Stats*: Dynamically fetches GitHub Stars via API.
    * *Analytics*: Vercel Web Analytics or Google Analytics.
* **Deployment**: GitHub Pages or Vercel.

## Directory Structure

```text
zerojudge_answer/
├── .devcontainer/         # GitHub Codespaces configuration
├── .github/
│   └── workflows/         # CI/CD pipelines (Automated generation & deployment)
├── scripts/               # Python data pipeline scripts
│   ├── scraper.py
│   ├── generator.py
│   ├── validator.py
│   ├── requirements.txt
│   └── prompts/           # System prompts for the LLM
├── answers_raw/           # Raw C++ solutions (e.g., a001.cpp)
├── content/               # Generated Markdown files (Data source for Next.js)
├── report.csv             # Execution status report (Ignored by Git)
├── web/                   # Next.js frontend directory
│   ├── pages/             # or app/ (Next.js routing)
│   ├── components/        # Reusable React components
│   ├── public/
│   ├── package.json
│   └── next.config.js
└── README.md              # This file

```

## Development Workflow

1. **Environment Setup**: Developed entirely within GitHub Codespaces, providing an isolated, ready-to-use Python and Node.js environment.
2. **Daily Updates**:
* Add new `[problem_id].cpp` files to `answers_raw/`.
* Run `python scripts/main.py` to trigger the scraper and LLM generator.
* Review `report.csv` to catch any parsing or generation errors.
* (Optional) Manually tweak specific `.md` files in `content/`.
* Commit and push to GitHub.


3. **Automated Deployment**: GitHub Actions detects updates in the `content/` directory and automatically triggers a Next.js build to publish the live site.

```
