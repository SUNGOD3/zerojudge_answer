import os
import time
import random

# 匯入你原本寫好的模組
from scraper import scrape_zerojudge
from generator import generate_markdown
from validator import validate_markdown

# 設定目錄路徑
RAW_DIR = "answers_raw"
CONTENT_DIR = "content"
BATCH_SIZE = 50

def main():
    # 確保輸出目錄存在
    os.makedirs(CONTENT_DIR, exist_ok=True)
    
    # 1. 狀態記憶：找出所有 .cpp 檔，並過濾掉已經生成過 .md 的題號 (無狀態邏輯)
    all_files = [f for f in os.listdir(RAW_DIR) if f.endswith(".cpp")]
    pending_problems = []

    for f in all_files:
        prob_id = f.replace(".cpp", "")
        md_path = os.path.join(CONTENT_DIR, f"{prob_id}.md")
        # 只要 md 檔不存在，就列入待處理名單
        if not os.path.exists(md_path):
            pending_problems.append(prob_id)
    
    print(f"資料夾內共 {len(all_files)} 題，剩下 {len(pending_problems)} 題待處理。")

    if not pending_problems:
        print("🎉 目前沒有需要處理的題目喔！所有題目都已生成。")
        return

    sample_size = min(BATCH_SIZE, len(pending_problems))
    process_list = random.sample(pending_problems, sample_size)
    process_list.sort()

    print(f"本次預計處理 {len(process_list)} 題：{process_list}\n")

    for prob_id in process_list:
        print(f"▶ 開始處理: {prob_id}")

        # 讀取本機的 C++ 程式碼 (具備多重編碼備援機制)
        cpp_path = os.path.join(RAW_DIR, f"{prob_id}.cpp")
        try:
            with open(cpp_path, "r", encoding="utf-8") as f:
                cpp_code = f.read()
        except UnicodeDecodeError:
            try:
                with open(cpp_path, "r", encoding="big5") as f:
                    cpp_code = f.read()
            except UnicodeDecodeError:
                with open(cpp_path, "r", encoding="utf-8", errors="ignore") as f:
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

        # 【關鍵防呆】：如果 LLM 回傳錯誤，絕對不要存檔！
        if md_content.startswith("ERR:") or "LLM_Failed" in final_status:
            print(f"  └─ 狀態：生成失敗 ({final_status})，將在下次執行時重試。")
            continue

        # 儲存 Markdown 檔案 (只有在 LLM 成功生成時才會走到這步)
        md_path = os.path.join(CONTENT_DIR, f"{prob_id}.md")
        with open(md_path, "w", encoding="utf-8") as f:
            f.write(md_content)

        print(f"  └─ 狀態：{final_status}")
        
        # 安全延遲：拉長基礎等待時間 (休息 8 到 12 秒)，確保不會觸發 15 RPM 限制
        sleep_time = random.uniform(8, 12)
        print(f"  └─ 休息 {sleep_time:.1f} 秒...\n")
        time.sleep(sleep_time)

    print("🎉 本次批次處理完成！")

if __name__ == "__main__":
    main()
