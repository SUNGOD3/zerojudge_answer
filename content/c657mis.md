---
id: "c657mis"
title: "Error"
tags: ["Frequency Counter", "String", "Greedy"]
---

# c657mis - Error

[🔗 前往 ZeroJudge 原題](https://zerojudge.tw/ShowProblem?problemid=c657mis)

## 題目描述
題目要求找出輸入字串中，出現次數最多的字元，並輸出該字元及其出現次數。如果有多個字元出現次數相同且都是最大值，則輸出第一個出現的最大次數字元。

## 解題思路
程式碼首先統計字串中每個字元出現的次數，使用一個大小為 26 的整數陣列 `b` 來儲存每個小寫字母的出現次數。然後，程式碼找到出現次數最多的字元次數 `max`。接著，程式碼建立另一個陣列 `c`，將出現次數等於 `max` 的字元對應的陣列元素值設為 `max + 1`。最後，程式碼遍歷輸入字串，對於每個字元，將 `c` 陣列中對應的元素值減 1。當 `c` 陣列中某個元素的值減為 1 時，表示該字元是第一個出現次數為 `max` 的字元，程式碼輸出該字元和 `max`。

## 複雜度分析
- 時間複雜度: O(n)，其中 n 是輸入字串的長度。程式碼需要遍歷字串兩次，一次用於統計字元出現次數，另一次用於找到第一個出現次數最多的字元。
- 空間複雜度: O(1)。程式碼使用兩個大小為 26 的整數陣列，空間複雜度是常數級別。

## 程式碼
```cpp
#include <iostream>
#include <string>
using namespace std;
int main(){
	int max,maxn,i;
	string a;
	while(cin >> a){
		int b[26]={};
		int c[26]={};
		for(i=0;i<a.length();i++)
			b[a[i]-97]++;
		for(i=0,max=0,maxn=0;i<26;i++){
			if(b[i]>max)
				max=b[i];
		}
		for(i=0;i<26;i++){
			if(b[i]==max)
				c[i]=b[i]+1;
		}
		for(i=0;i<a.length();i++){
			c[a[i]-97]--;
			if(c[a[i]-97]==1){
				cout << a[i] << " " << max << endl;;  
				break;
			}
		}
	}
}