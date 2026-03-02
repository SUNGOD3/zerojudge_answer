---
id: "d576 map"
title: "d576 map"
tags: ["DFS", "Backtracking", "Game Theory"]
---

# d576 map - Error

[🔗 前往 ZeroJudge 原題](https://zerojudge.tw/ShowProblem?problemid=d576%20map)

## 題目描述
題目描述一個兩人遊戲，在一個 n x n 的地圖上進行。玩家輪流選擇一個未訪問的格子，並將其標記為自己的顏色。遊戲結束時，計算每個玩家獲得的總分，分數由地圖上每個格子的值決定。目標是計算 A 玩家獲勝、B 玩家獲勝和平局的次數。

## 解題思路
這題的核心是模擬遊戲過程並計算所有可能的遊戲結果。對於 n=4 的情況，先使用 backtracking 演算法 `bdfs` 預先生成所有可能的遊戲狀態，並將每個狀態儲存在 `fmap` 陣列中。然後，對於每個預先生成的狀態，計算 A 和 B 玩家的分數，並更新獲勝次數。對於 n != 4 的情況，直接使用 DFS 演算法 `dfs` 模擬遊戲過程，並計算每個遊戲的結果。

`bdfs` 函數使用 backtracking 探索所有可能的遊戲狀態，將每個狀態儲存在 `fmap` 陣列中。`dfs` 函數模擬遊戲過程，計算 A 和 B 玩家的分數，並更新獲勝次數。

## 複雜度分析
- 時間複雜度: O(n! * n^2) for n != 4, and O(number of states * n^2) for n = 4.  `bdfs` 的時間複雜度是 O(n!)，因為它需要探索所有可能的遊戲狀態。`dfs` 的時間複雜度是 O(n!)，因為它需要探索所有可能的遊戲狀態。對於 n=4 的情況，`bdfs` 預先計算所有狀態，然後計算每個狀態的結果，時間複雜度取決於狀態的數量。
- 空間複雜度: O(n^2) for n != 4, and O(number of states * n^2) for n = 4.  `fmap` 陣列用於儲存所有可能的遊戲狀態，空間複雜度取決於狀態的數量。

## 程式碼
```cpp
#include <iostream>
using namespace std;
int fmap[5][5][16633],it,p[5][5],n=4,awin,bwin,tie,np[5][5];
inline void dfs(int x,int y,int as,int bs,int round){
	int stp=0;
	np[x][y]=1;
	if(round&1){
		as+=p[x][y];
		for(int i=0;i<n;++i)
			if(!np[i][y]){
				dfs(i,y,as,bs,round+1);
				stp=1;
	 		}
	}
	else{
		bs+=p[x][y];
		for(int i=0;i<n;++i)
			if(!np[x][i]){
				dfs(x,i,as,bs,round+1);
				stp=1;
			}
	}
	if(stp==0){
		if(as>bs)
			++awin;
		else if(bs>as)
			++bwin;
		else
			++tie;
	}
	np[x][y]=0;
	return;
}
inline void bdfs(int x,int y,int round){
	int stp=0;
	if(round&1){
		np[x][y]=1;
		for(int i=0;i<n;++i)
			if(!np[i][y]){
				bdfs(i,y,round+1);
				stp=1;
	 		}
	}
	else{
		np[x][y]=2;
		for(int i=0;i<n;++i)
			if(!np[x][i]){
				bdfs(x,i,round+1);
				stp=1;
			}
	}
	if(stp==0){
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				fmap[i][j][it]=np[i][j];
			}
		}
		++it;
	}
	np[x][y]=0;
	return;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=0;i<4;++i){
		bdfs(0,i,1);
	}
	while(cin >> n){
		for(int i=0;i<5;++i)
			for(int j=0;j<5;++j)
				np[i][j]=p[i][j]=0;
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j)
				cin >> p[i][j];
		awin=bwin=tie=0;
		if(n!=4){
			for(int i=0;i<n;++i)
				dfs(0,i,0,0,1);
		}
		else{
			for(int i=0;i<it;++i){
				int as=0,bs=0;
				for(int ii=0;ii<n;++ii){
					for(int jj=0;jj<n;++jj){
						if(fmap[ii][jj][i]==2)
							bs+=p[ii][jj];
						else if(fmap[ii][jj][i]==1)
							as+=p[ii][jj];
					}
				}	
				if(as>bs){
					++awin;
				}
				else if(bs>as){
					++bwin;
				}
				else{
					++tie;
				}
			}
		}
		cout << awin << " " << bwin << " " << tie << "\n";
	}
}