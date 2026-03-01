import os
from pathlib import Path
import google.generativeai as genai
from dotenv import load_dotenv

# 讀取 .env
env_path = Path(__file__).parent.parent / '.env'
load_dotenv(dotenv_path=env_path)

api_key = os.getenv("GOOGLE_API_KEY")
if not api_key:
    print("找不到 API Key，請檢查 .env 檔案。")
    exit()

genai.configure(api_key=api_key)

print("正在查詢這把金鑰可用的模型清單...\n")
print("-" * 30)

try:
    # 走訪所有模型，過濾出支援 'generateContent' (生成文本) 的模型
    for m in genai.list_models():
        if 'generateContent' in m.supported_generation_methods:
            print(m.name)
    print("-" * 30)
    print("查詢完成！")
except Exception as e:
    print(f"查詢失敗，錯誤訊息：{e}")