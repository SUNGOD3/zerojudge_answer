---
id: "f315(BIT)"
title: "f315(BIT) - Error"
tags: ["Binary Indexed Tree", "Greedy", "Array"]
---

# f315(BIT) - Error

[🔗 前往 ZeroJudge 原題](https://zerojudge.tw/ShowProblem?problemid=f315(BIT))

## 題目描述
題目要求計算給定數列中，每個數字第一次出現位置與最後一次出現位置之間數值的和。數列包含 2n 個數字，其中前 n 個數字是獨特的，後 n 個數字是前 n 個數字的重新排列。

## 解題思路
這題的核心思想是利用 Binary Indexed Tree (BIT) 快速計算區間和。首先，我們需要記錄每個數字第一次出現的位置 `l[i]` 和最後一次出現的位置 `r[i]`。然後，對於每個數字 `i`，我們計算 `sum(r[i]) - sum(l[i])`，這表示從 `l[i]` 到 `r[i]` 的區間和。BIT 用於高效地計算這些區間和。

具體步驟如下：
1.  讀取輸入的 2n 個數字，並記錄每個數字的第一次出現位置和最後一次出現位置。
2.  初始化 BIT 數組。
3.  遍歷前 n 個數字，對於每個數字 `i`，計算 `sum(r[i]) - sum(l[i])` 並加到答案中。
4.  在 BIT 中更新 `l[i]` 和 `r[i]` 的值，表示這些位置已經被訪問過。

## 複雜度分析
- 時間複雜度: O(n log n)
- 空間複雜度: O(n)

## 程式碼
```cpp
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
#define lowbit(x) (x & -x)
#define ll long long
using namespace std;
int n,nn;
vector<int> bit(200001), l(100001), r(100001);
inline ll int read(){
	ll int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
inline ll sum(ll int x){
	ll ret=0;
	for(;x;x-=lowbit(x))
		ret+=bit[x];
	return ret;
}
inline void upd(int x,int v){
	for(;x<=nn;x+=lowbit(x))
		bit[x]+=v;
}
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
 	ll ans = 0;
	n=read();
	nn=2*n;
	for(int i=1,t;i<=nn;++i){
		t=read();
		if (!l[t])l[t]=i;
		else r[t]=i;
	}
	for(int i=1;i<=n;++i){
		ans += sum(r[i]) - sum(l[i]);
		upd(l[i],1), upd(r[i],1);
	}
	cout << ans ;
}