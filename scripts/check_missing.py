import os

# 自動抓取目前腳本所在的絕對路徑 (scripts/ 資料夾)
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))

# 往上一層推算專案根目錄
PROJECT_ROOT = os.path.dirname(SCRIPT_DIR)

# 設定目標資料夾的絕對路徑
RAW_DIR = os.path.join(PROJECT_ROOT, "answers_raw")
CONTENT_DIR = os.path.join(PROJECT_ROOT, "content")

def get_base_names(directory, extensions=None):
    """取得資料夾內去除副檔名的檔案名稱集合"""
    if not os.path.exists(directory):
        print(f"⚠️ 找不到目錄: {directory}")
        return set()
    
    file_ids = set()
    for filename in os.listdir(directory):
        name, ext = os.path.splitext(filename)
        # 如果你的 raw 資料沒有副檔名，把 extensions 設為 None 即可全抓
        if extensions is None or ext.lower() in extensions:
            file_ids.add(name.lower())
            
    return file_ids

def main():
    print(f"🔍 掃描目錄: {RAW_DIR}")
    print(f"🔍 掃描目錄: {CONTENT_DIR}\n")

    # 假設你的原始碼是 .cpp，生成出來的是 .md
    raw_ids = get_base_names(RAW_DIR, extensions=['.cpp', '.txt', '.c']) 
    content_ids = get_base_names(CONTENT_DIR, extensions=['.md'])

    missing_ids = sorted(list(raw_ids - content_ids))

    print("=" * 40)
    print(f"📊 產線對帳報告")
    print("=" * 40)
    print(f"📥 原始題目總數: {len(raw_ids)}")
    print(f"✅ 已成功轉換數: {len(content_ids)}")
    print(f"❌ 尚未轉換數:   {len(missing_ids)}")
    print("-" * 40)

    if missing_ids:
        print("未轉換的題號列表：\n")
        for i in range(0, len(missing_ids), 10):
            print(", ".join(missing_ids[i:i+10]))
    else:
        print("🎉 太棒了！所有的題目都已經成功轉換完畢！")

if __name__ == "__main__":
    main()