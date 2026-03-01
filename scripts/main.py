import os
import time
import random
import pandas as pd
from scraper import scrape_zerojudge
from generator import generate_markdown
from validator import validate_markdown

# 設定目錄路徑
RAW_DIR = "answers_raw"
CONTENT_DIR = "content"
REPORT_FILE = "report.csv"
BATCH_SIZE = 3  # 測試階段先設小一點，之後可以改成 30 或 50

def main():
    # 確保輸出目錄存在
    os.makedirs(CONTENT_DIR, exist_ok=True)
    
    # 1. 狀態記憶：找出所有 .cpp 檔，並過濾掉已經生成過 .md 的題號
    all_files = [f for f in os.listdir(RAW_DIR) if f.endswith(".cpp")]
    pending_problems = []
    
    for f in all_files:
        prob_id = f.replace(".cpp", "")
        md_path = os.path.join(CONTENT_DIR, f"{prob_id}.md")
        if not os.path.exists(md_path):
            pending_problems.append(prob_id)
    
    print(f"資料夾內共 {len(all_files)} 題，剩下 {len(pending_problems)} 題待處理。")
    
    # 取出本次要處理的批次
    process_list = pending_problems[:BATCH_SIZE]
    if not process_list:
        print("目前沒有需要處理的題目喔！")
        return

    print(f"本次預計處理 {len(process_list)} 題：{process_list}\n")
    report_data = []

    for prob_id in process_list:
        print(f"▶ 開始處理: {prob_id}")
        
        # 讀取本機的 C++ 程式碼
        cpp_path = os.path.join(RAW_DIR, f"{prob_id}.cpp")
        with open(cpp_path, "r", encoding="utf-8") as f:
            cpp_code = f.read()
        
        # 階段 A: 執行爬蟲
        scrape_result = scrape_zerojudge(prob_id)
        
        # 階段 B: 執行 LLM 生成
        md_content = generate_markdown(scrape_result, cpp_code)
        
        # 階段 C: 執行檢驗
        if scrape_result["status"] != "SUCCESS":
            final_status = scrape_result["status"] # 沿用爬蟲階段的警告
        else:
            is_valid, val_msg = validate_markdown(md_content)
            final_status = val_msg
        
        # 儲存 Markdown 檔案
        md_path = os.path.join(CONTENT_DIR, f"{prob_id}.md")
        with open(md_path, "w", encoding="utf-8") as f:
            f.write(md_content)
        
        # 紀錄到報告陣列中
        report_data.append({
            "problem_id": prob_id,
            "title": scrape_result.get("title", "Unknown"),
            "status": final_status
        })
        
        print(f"  └─ 狀態：{final_status}")
        
        # 安全延遲：避免觸發 ZJ 或 API 限制 (休息 4 到 7 秒)
        sleep_time = random.uniform(4, 7)
        print(f"  └─ 休息 {sleep_time:.1f} 秒...\n")
        time.sleep(sleep_time)

    # 最後將本次執行的結果寫入 report.csv
    df_new = pd.DataFrame(report_data)
    if os.path.exists(REPORT_FILE):
        # 如果報告已經存在，就把新的接在後面，並根據 problem_id 去重複 (保留最新狀態)
        df_old = pd.read_csv(REPORT_FILE)
        df_combined = pd.concat([df_old, df_new]).drop_duplicates(subset=['problem_id'], keep='last')
        df_combined.to_csv(REPORT_FILE, index=False, encoding="utf-8-sig")
    else:
        df_new.to_csv(REPORT_FILE, index=False, encoding="utf-8-sig")
    
    print(f"🎉 本次批次處理完成！狀態報告已更新至 {REPORT_FILE}。")

if __name__ == "__main__":
    main()