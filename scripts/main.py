import os
import glob
import time
from generator import generate_markdown

# 這裡假設你的爬蟲函數寫在 crawler.py 裡面，如果有改名請自行調整
try:
    from crawler import fetch_problem_info 
except ImportError:
    print("請確保有 fetch_problem_info 函數可以爬取題目資訊")

def get_pending_problems():
    """找出有 cpp 檔案，但還沒生成 md 檔案的題號"""
    cpp_files = glob.glob("answers_raw/*.cpp")
    pending = []
    
    for cpp_path in cpp_files:
        # 從路徑中取出題號 (例如 answers_raw/a001.cpp -> a001)
        filename = os.path.basename(cpp_path)
        problem_id = filename.replace('.cpp', '')
        
        # 檢查對應的 md 檔是否存在
        md_path = os.path.join("content", f"{problem_id}.md")
        if not os.path.exists(md_path):
            pending.append(problem_id)
            
    # 按照題號排序
    return sorted(pending)

def main():
    pending_problems = get_pending_problems()
    
    if not pending_problems:
        print("🎉 所有題目都已經有對應的 Markdown 檔案了！")
        return

    print(f"發現 {len(pending_problems)} 題需要處理。")
    
    # 為了避免 API 超載，每次最多處理 3 題 (你可以之後再調大)
    batch_size = 3
    to_process = pending_problems[:batch_size]
    print(f"本次預計處理 {len(to_process)} 題：{to_process}")

    # 確保 content 資料夾存在
    os.makedirs("content", exist_ok=True)

    for problem_id in to_process:
        print(f"\n▶ 開始處理: {problem_id}")
        
        # 1. 讀取 C++ 程式碼
        cpp_path = os.path.join("answers_raw", f"{problem_id}.cpp")
        with open(cpp_path, "r", encoding="utf-8") as f:
            cpp_code = f.read()

        # 2. 爬取題目資訊 (這裡套用你原本的爬蟲邏輯)
        # 備註: 如果你的爬蟲函數名稱或用法不同，請在這裡修改
        problem_info = fetch_problem_info(problem_id)
        
        # 3. 呼叫 LLM 生成文章
        md_content = generate_markdown(problem_info, cpp_code)
        
        # 4. 檢查是否生成成功 (如果 API 報錯，通常會回傳包含 ERR 的字串)
        if md_content.startswith("ERR:"):
            print(f"  └─ 狀態：生成失敗，將在下次執行時重試。")
            continue
            
        # 5. 存檔
        md_path = os.path.join("content", f"{problem_id}.md")
        with open(md_path, "w", encoding="utf-8") as f:
            f.write(md_content)
            
        print(f"  └─ 狀態：SUCCESS")
        
        # 休息一下避免被鎖 API
        time.sleep(5)

if __name__ == "__main__":
    main()