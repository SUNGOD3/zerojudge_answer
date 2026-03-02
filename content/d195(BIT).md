---
id: "d195(BIT)"
title: "d195(BIT) - Error"
tags: ["Binary Indexed Tree", "Greedy", "Array"]
---

# d195(BIT) - Error

[🔗 前往 ZeroJudge 原題](https://zerojudge.tw/ShowProblem?problemid=d195(BIT))

## 題目描述
題目要求判斷對於給定的數字序列，經過特定操作後，最終結果是 "Marcelo" 還是 "Carlos"。操作如下：從序列的最後一個數字開始，如果當前數字小於等於目前找到的最小值，則更新最小值；否則，將當前數字的 BIT 查詢結果（小於等於當前數字的數字個數）加到總和中。最後，如果總和是奇數，輸出 "Marcelo"，否則輸出 "Carlos"。

## 解題思路
本題的核心是使用 Binary Indexed Tree (BIT) 來高效地計算小於等於某個值的數字個數。算法流程如下：

1.  初始化 BIT 數組為 0。
2.  從序列的最後一個數字開始遍歷。
3.  對於每個數字 `a[i]`，比較它與目前找到的最小值 `mi`。
    *   如果 `a[i]` 小於等於 `mi`，則更新 `mi` 為 `a[i]`。
    *   否則，使用 BIT 查詢小於等於 `a[i]` 的數字個數，並將其加到總和 `ans` 中。
4.  在遍歷完所有數字後，將 BIT 數組中 `a[i]` 位置的值加 1，表示已經出現了一個 `a[i]`。
5.  判斷總和 `ans` 是奇數還是偶數，並輸出相應的結果。

## 複雜度分析
- 時間複雜度: O(n log n)，其中 n 是序列的長度。遍歷序列需要 O(n) 時間，BIT 的更新和查詢操作都需要 O(log n) 時間。
- 空間複雜度: O(n)，主要用於存儲 BIT 數組和輸入序列。

## 程式碼
```cpp
#include <stdio.h>
int a[100001],BIT[100001],MAX_N;
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
int lowbit(int x){
    return x&(-x);
}
void edit(int i, int delta){
    for (int j = i; j <= MAX_N; j += lowbit(j))
        BIT[j] += delta;
}
int sum (int k){
    int ans = 0;
    for (int i = k; i > 0; i -= lowbit(i))
        ans += BIT[i];
    return ans;
}
int main(){
    int n;
    while(n=read()){
    	if(n==0)break;
    	MAX_N=n;
		int ans=0,mi=100001;	
		for(int i=0;i<100001;++i)
			BIT[i]=0;
    	for(int i=0;i<n;++i)
    		a[i]=read();
		for(int i=n-1;i>=0;--i){
			if(mi>=a[i])
				mi=a[i];
			else
				ans+=sum(a[i]);
			edit(a[i],1);
		}
		if(ans%2)
			printf("Marcelo\n");
		else
			printf("Carlos\n");
	}
}