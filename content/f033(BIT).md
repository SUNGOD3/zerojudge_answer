---
id: "f033(BIT)"
title: "f033(BIT) - Range Sum Query"
tags: ["Binary Indexed Tree", "Greedy", "Binary Search"]
---

# f033(BIT) - Range Sum Query

[🔗 前往 ZeroJudge 原題](https://zerojudge.tw/ShowProblem?problemid=f033(BIT))

## 題目描述
題目要求實作一個資料結構，支援以下兩種操作：
1.  查詢前 `k` 個元素的和。
2.  將第 `x` 個元素的值修改為 `y`，並保持資料結構的有效性。

## 解題思路
本題可以使用 Binary Indexed Tree (BIT) 來高效地解決。BIT 是一種資料結構，可以用來計算數組的前綴和，並且支援快速更新單個元素的值。

程式碼中，`BIT` 數組儲存 BIT 的值。`update` 函數用於更新 BIT，`sum` 函數用於計算前綴和。`bs` 函數使用二分搜尋來找到第一個前綴和大於或等於 `q` 的索引。

對於查詢操作，我們直接使用 `bs` 函數找到滿足條件的索引。對於更新操作，我們計算差值，然後使用 `update` 函數更新 BIT。

## 複雜度分析
- 時間複雜度: O(log N) for each update and query operation, where N is the size of the array.  The overall time complexity is O(M log N), where M is the number of operations.
- 空間複雜度: O(N) for storing the BIT array.

## 程式碼
```cpp
#include <iostream>
using namespace std;
long long BIT[500005],n,m,is,x,y;
int lw(int v){
	return  v&(-v);
}
void update(int v,int it){
	for(int i=it;i<=n;i+=lw(i)){
		BIT[i]+=v;
	}
}
long long sum(int it){
	long long rt=0;
	for(int i=it;i>0;i-=lw(i)){
		rt+=BIT[i];
	}
	return rt;
}
int bs(int l,int r,long long q){
	if(l>r)return l;
	int mid=(l+r)/2;
	if(sum(mid)>=q){
		return bs(l,mid-1,q);
	}
	return bs(mid+1,r,q);
}
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	cin >> n >> m;
	for(int i=1;i<=n;++i){
		cin >> x;
		update(x,i);
	}
	for(int i=0;i<m;++i){
		cin >> is;
		if(is==2){
			cin >> x;
			if(x>sum(n)){
				cout << "meh\n";
			}
			else{
				cout << bs(0,n,x) << '\n';
			}
		}
		else{
			cin >> x >> y;
			update(y-(sum(x)-sum(x-1)),x);
		}
	}
}