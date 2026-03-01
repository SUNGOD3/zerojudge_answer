import os
import time
from dotenv import load_dotenv
from google import genai

# 極簡化讀取：直接抓取當前執行環境下的 .env
load_dotenv()

# 初始化新版 SDK 的 Client
try:
    client = genai.Client()
except Exception as e:
    print(f"【嚴重警告】：初始化 AI 失敗，請確認 .env 檔案中有正確設定 GEMINI_API_KEY。錯誤：{e}")

def generate_markdown(problem_info, cpp_code):
    """
    將爬蟲抓到的題目資訊與 C++ 程式碼組合，請 LLM 生成帶有 Frontmatter 的 Markdown。
    (具備遇到 429 頻率限制自動重試機制)
    """
    if problem_info["status"] == "WARN: Missing_Text":
         return f"---\nid: \"{problem_info['problem_id']}\"\ntitle: \"{problem_info['title']}\"\ntags: [\"未分類\"]\n---\n\n# {problem_info['problem_id']} - {problem_info['title']}\n\n[🔗 前往 ZeroJudge 原題](https://zerojudge.tw/ShowProblem?problemid={problem_info['problem_id']})\n\n> ⚠️ 題目內容過短，可能是圖片或 PDF。請手動補齊。\n\n## 程式碼\n```cpp\n{cpp_code}\n```"

    prompt = f"""
    你是一個專業的 C++ 演算法工程師。請根據以下 ZeroJudge 題目與我的 AC 程式碼，撰寫一篇技術部落格文章。
    
    【絕對要求】
    1. 嚴格禁止任何開場白或結語。
    2. 必須 100% 直接從 `---` (Frontmatter 邊界) 開始輸出。
    3. 複雜度分析【絕對禁止】使用 LaTeX 語法 (嚴禁使用 `$` 符號)。請一律使用純文字或 Markdown 行內程式碼。
    4. 程式碼區塊請原封不動輸出，禁止添加註解。
    5. 分析題目與程式碼，萃取 2 到 4 個 LeetCode 風格的標籤 (例如: Hash Table, Dynamic Programming, DFS, Greedy)，並填入頂部的 tags 陣列中。
    
    嚴格遵守以下的 Markdown 結構 (包含最頂部的 YAML Frontmatter)：
    
    ---
    id: "{problem_info['problem_id']}"
    title: "{problem_info['title']}"
    tags: ["標籤1", "標籤2"]
    ---
    
    # {problem_info['problem_id']} - {problem_info['title']}

    [🔗 前往 ZeroJudge 原題](https://zerojudge.tw/ShowProblem?problemid={problem_info['problem_id']})
    
    ## 題目描述
    簡述題目想要求什麼。
    
    ## 解題思路
    分析這題的邏輯、使用的演算法或資料結構。
    
    ## 複雜度分析
    - 時間複雜度: O(...)
    - 空間複雜度: O(...)
    
    ## 程式碼
    ```cpp
    {cpp_code}
    ```
    
    【題目內容】
    {problem_info['content']}
    """

    max_retries = 3
    for attempt in range(max_retries):
        try:
            response = client.models.generate_content(
                model='gemini-2.5-flash',
                contents=prompt
            )
            
            text = response.text.strip()
            
            if text.startswith("```markdown"):
                text = text.replace("```markdown", "", 1)
            if text.startswith("```"):
                text = text.replace("```", "", 1)
            if text.endswith("```"):
                text = text[:-3]
                
            text = text.strip()
            
            if "---" in text and not text.startswith("---"):
                text = text[text.find("---"):]
                
            return text
            
        except Exception as e:
            error_msg = str(e)
            # 判斷是否為頻率限制 (429)
            if "429" in error_msg or "RESOURCE_EXHAUSTED" in error_msg:
                wait_time = 60 # 強制冷卻 1 分鐘
                print(f"\n    ⚠️ 觸發 API 頻率限制！(第 {attempt + 1}/{max_retries} 次嘗試)")
                print(f"    💤 程式將進入冷卻睡眠 {wait_time} 秒...")
                time.sleep(wait_time)
            else:
                # 其他不可預期的錯誤，直接回傳失敗
                print(f"LLM 發生錯誤: {e}")
                return f"ERR: LLM_Failed\n\n{e}"
                
    return "ERR: LLM_Failed\n\n連續多次觸發 429 限制，自動放棄該題。"

# 簡易測試區塊
if __name__ == "__main__":
    test_info = {
        "problem_id": "a001",
        "title": "哈囉",
        "content": "測試內容",
        "status": "SUCCESS"
    }
    test_code = "// test"
    print(generate_markdown(test_info, test_code))
