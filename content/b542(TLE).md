---
id: "b542(TLE)"
title: "500 Server Error"
tags: ["Hash Table", "Sorting", "Two Pointers"]
---

# b542(TLE) - 500 Server Error

[🔗 前往 ZeroJudge 原題](https://zerojudge.tw/ShowProblem?problemid=b542(TLE))

## 題目描述
題目要求處理一個包含 n 個整數的陣列 a 和 m 個查詢。對於每個查詢 f，需要判斷是否存在 a 中的兩個數，其和等於 f。如果存在，輸出 "YES"，否則輸出 "NO"。如果陣列 a 中存在重複數字，則無論後續查詢為何，都應輸出 "YES"。

## 解題思路
首先，使用一個 map `fd` 統計陣列 a 中每個數字出現的次數。如果任何數字出現次數大於 1，則設定一個標記 `ans[0] = 1`，表示存在重複數字，後續所有查詢都應輸出 "YES"。

接著，對陣列 a 進行排序。對於每個查詢 f，如果 `ans[f]` 已經存在，則直接輸出 "YES"。否則，使用雙指標法在已排序的陣列 a 中尋找兩個數，其和等於 f。如果找到，則設定 `ans[f] = 1`，輸出 "YES"，否則輸出 "NO"。

## 複雜度分析
- 時間複雜度: O(n log n + m * n)  排序陣列 a 的時間複雜度為 O(n log n)。對於每個查詢 f，雙指標法尋找兩個數的時間複雜度為 O(n)。因此，總時間複雜度為 O(n log n + m * n)。
- 空間複雜度: O(n + m)  `fd` map 儲存陣列 a 中每個數字的出現次數，空間複雜度為 O(n)。`ans` map 儲存查詢結果，空間複雜度為 O(m)。因此，總空間複雜度為 O(n + m)。

## 程式碼
```cpp
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
long long int n,m,a[100001],f;
map <long long int,long long int> fd;
map <long long int,bool> ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n;++i){
		cin >> a[i];
		++fd[a[i]];
		if(fd[a[i]]>1){
			ans[0]=1;
		}
	}
	sort(a,a+n);
	for(int i=0;i<m;++i){
		cin >> f;
		bool c=1;
		if(ans.find(f)!=ans.end())c=0;
		for(int i=0;i<n&&c;++i){
			if(fd.find(a[i]+f)!=fd.end()){
				ans[a[i]+f]=1;
				c=0;
			}
		}
		if(c)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}