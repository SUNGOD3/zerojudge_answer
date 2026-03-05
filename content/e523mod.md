---
id: "e523mod"
title: "Error"
tags: ["Array", "Input/Output", "Lookup"]
---

# e523mod - Error

[🔗 前往 ZeroJudge 原題](https://zerojudge.tw/ShowProblem?problemid=e523mod)

## 題目描述
題目要求讀取整數 `b` 作為輸入，並檢查該數字是否為斐波那契數列中的一個數字。如果 `b` 是斐波那契數列中的數字，則輸出該數字在數列中的索引（從 1 開始）。如果 `b` 不是斐波那契數列中的數字，則輸出 "-1"。輸入以 0 結尾，程式結束。

## 解題思路
程式碼預先定義了一個包含前 30 個斐波那契數列的整數陣列 `d`。對於每個輸入 `b`，程式碼使用迴圈在 `d` 陣列中搜尋 `b`。如果找到 `b`，則輸出 `b` 在陣列中的索引加 1。如果未找到 `b`，則輸出 "-1"。輸入以 0 結束程式。程式碼使用了優化的輸入輸出方式，例如 `read()` 和 `write()` 函數，以及編譯器優化標誌。

## 複雜度分析
- 時間複雜度: O(N)，其中 N 是預先計算的斐波那契數列的長度 (在本例中為 30)。對於每個輸入，程式碼最多需要遍歷整個陣列。
- 空間複雜度: O(1)，因為程式碼使用的額外空間是固定的，不隨輸入大小而變化。陣列 `d` 的大小是固定的。

## 程式碼
```cpp
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#define putchar_unlocked putchar
//#define getchar_unlocked getchar
#include <stdio.h>
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
inline void write(int x) {
	int stk[6],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	int d[30]={1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040},b(read()),c;
	b=read();
	do{
		c=-1;
		do{}while(d[++c]<b);
		if(d[c]==b)
			write(++c);
		else{
			putchar_unlocked(45);putchar_unlocked(49);
		}
		putchar_unlocked(10);
	}while(b=read());
}