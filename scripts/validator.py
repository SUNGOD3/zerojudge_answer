import re

def validate_markdown(md_content):
    """
    第二道防護網：檢查 LLM 生成的 Markdown 格式是否符合基本要求。
    """
    # 檢查 LLM API 是否直接回報錯誤
    if md_content.startswith("ERR:"):
        return False, "ERR: Generation_Failed"
    
    # 檢查是否包含我們規定的必備標題
    required_headers = ["## 題目描述", "## 解題思路", "## 複雜度分析", "## 程式碼"]
    for header in required_headers:
        if header not in md_content:
            return False, f"WARN: Missing_Header_{header.replace(' ', '')}"
    
    # 檢查內容長度防呆 (如果整篇小於 100 字，可能生成被截斷)
    if len(md_content) < 100:
        return False, "WARN: Content_Too_Short"
        
    return True, "SUCCESS"