import os
from dotenv import load_dotenv
from google import genai

# 極簡化讀取：直接抓取當前執行環境下的 .env
load_dotenv()

# 初始化新版 SDK 的 Client
# 它會自動去環境變數中尋找 GEMINI_API_KEY
try:
    client = genai.Client()
except Exception as e:
    print(f"【嚴重警告】：初始化 AI 失敗，請確認 .env 檔案中有正確設定 GEMINI_API_KEY。錯誤：{e}")

def generate_markdown(problem_info, cpp_code):
    """
    將爬蟲抓到的題目資訊與 C++ 程式碼組合，請 LLM 生成 Markdown。
    """
    if problem_info["status"] == "WARN: Missing_Text":
         return f"# {problem_info['problem_id']} - {problem_info['title']}\n\n> ⚠️ 題目內容過短，可能是圖片或 PDF。請手動補齊。\n\n## 程式碼\n```cpp\n{cpp_code}\n```"

    # 1. 強化 Prompt：加入嚴格禁止廢話的指令
    # 1. 強化 Prompt：封殺廢話、禁用 LaTeX、禁止污染程式碼
    prompt = f"""
    你是一個專業的 C++ 演算法工程師。請根據以下 ZeroJudge 題目與我的 AC 程式碼，撰寫一篇技術部落格文章。
    
    【絕對要求】
    1. 嚴格禁止任何開場白、問候語或結語（例如：「好的」、「這是一篇...」）。
    2. 必須 100% 直接從 `# ` 標題開始輸出。
    3. 數學式與時間空間複雜度【絕對禁止】使用 LaTeX 語法 (嚴禁使用 `$` 符號包覆或 `\\max` 等語法)。請一律使用純文字或 Markdown 行內程式碼 (例如 `O(N * K)` 或 `max(f_i)`)。
    4. 在 `## 程式碼` 區塊中，請【原封不動】地輸出我提供的 C++ 程式碼。絕對禁止在程式碼中添加任何逐行註解或修改變數名稱。所有的邏輯說明請寫在「解題思路」段落中。
    
    嚴格遵守以下的 Markdown 結構：
    
    # {problem_info['problem_id']} - {problem_info['title']}
    
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

    try:
        response = client.models.generate_content(
            model='gemini-2.5-flash',
            contents=prompt
        )
        
        text = response.text
        
        # 2. 字串截斷防呆：強制找出第一個標題，把前面的廢話全刪了
        if "# " in text:
            text = text[text.find("# "):]
            
        return text
    except Exception as e:
        print(f"LLM 發生錯誤: {e}")
        return f"ERR: LLM_Failed\n\n{e}"

# 簡易測試區塊
if __name__ == "__main__":
    test_info = {
        "problem_id": "a001",
        "title": "哈囉",
        "content": "請寫一個程式，可以讀入指定的字串，並且輸出指定的字串。比如：輸入字串 'world', 則請輸出 'hello, world'",
        "status": "SUCCESS"
    }
    try:
        with open("answers_raw/a001.cpp", "r", encoding="utf-8") as f:
            test_code = f.read()
    except FileNotFoundError:
        test_code = "// 找不到測試檔案"

    print("開始請 LLM 生成文章，請稍候...")
    md_result = generate_markdown(test_info, test_code)
    print("-" * 30)
    print("生成結果預覽：\n")
    print(md_result)
    print("-" * 30)