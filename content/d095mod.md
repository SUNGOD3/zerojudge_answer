---
id: "d095mod"
title: "Clock Angle"
tags: ["Math", "Geometry"]
---

# d095mod - Clock Angle

[🔗 前往 ZeroJudge 原題](https://zerojudge.tw/ShowProblem?problemid=d095mod)

## 題目描述
題目要求計算時針和分針之間的夾角。輸入為小時和分鐘，以浮點數形式表示。輸出為時針和分針之間的最小夾角，以浮點數形式表示，精確到小數點後三位。

## 解題思路
時針每小時移動 30 度 (360 / 12)，分針每分鐘移動 6 度 (360 / 60)。
計算時針和分針的度數，然後計算它們之間的差的絕對值。
如果差大於 180 度，則取 360 度減去差值，因為我們需要最小夾角。

## 複雜度分析
- 時間複雜度: O(n)，其中 n 是輸入的數量。
- 空間複雜度: O(1)

## 程式碼
```cpp
#include <iostream>
#include <cmath> 
using namespace std;
int main(){
	float a,b;
	while(scanf("%f:%f",&a,&b)==2&&a!=0){
		a=(a*30)+b/2;
		b*=6;
		if(abs(a-b)>180) 
			printf("%.3f\n",360-abs(a-b));
		else 
			printf("%.3f\n",abs(a-b));
	}
}