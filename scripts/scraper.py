import requests
from bs4 import BeautifulSoup
import time
import random

def scrape_zerojudge(problem_id):
    """
    根據題號爬取 ZeroJudge 題目資訊，並執行初步的內容檢驗。
    """
    url = f"https://zerojudge.tw/ShowProblem?problemid={problem_id}"
    
    # 設定 User-Agent 偽裝成正常瀏覽器，降低被擋的機率
    headers = {
        "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36"
    }
    
    try:
        # 爬蟲禮貌：加上 1 到 3 秒的隨機延遲
        time.sleep(random.uniform(1, 3))
        
        response = requests.get(url, headers=headers, timeout=10)
        response.raise_for_status()
        
        soup = BeautifulSoup(response.text, 'html.parser')
        
        # 1. 抓取標題 (ZJ 標題通常在 id='problem_title' 的 span 裡)
        title_element = soup.find('span', id='problem_title')
        title = title_element.text.strip() if title_element else "Unknown Title"
        
        # 2. 抓取內容 (ZJ 的題目敘述、輸入輸出說明通常在 class='problembox' 的 div 裡)
        content_boxes = soup.find_all('div', class_='problembox')
        content_text = ""
        for box in content_boxes:
            content_text += box.get_text(separator='\n', strip=True) + "\n\n"
            
        content_text = content_text.strip()
        
        # 3. 第一道防護網：Scraping Validation (文字長度檢驗)
        status = "SUCCESS"
        if len(content_text) < 50:
            status = "WARN: Missing_Text"
            
        return {
            "problem_id": problem_id,
            "title": title,
            "content": content_text,
            "status": status
        }
        
    except requests.RequestException as e:
        # 如果網路錯誤或被擋，回報錯誤狀態
        return {
            "problem_id": problem_id,
            "title": "Error",
            "content": str(e),
            "status": "ERR: Request_Failed"
        }

# 簡易測試區塊
if __name__ == "__main__":
    test_id = "a001"
    print(f"開始測試爬取題號: {test_id} ...")
    result = scrape_zerojudge(test_id)
    
    print("-" * 30)
    print(f"狀態: {result['status']}")
    print(f"標題: {result['title']}")
    print(f"內容長度: {len(result['content'])} 字")
    if result['status'] == "SUCCESS":
        print("預覽前 100 字:")
        print(result['content'][:100] + "...")
    print("-" * 30)