#include <bits/stdc++.h>
using namespace std;
int stk[10];
vector <pair <int,int>> e={{5,4},{5,3},{5,2},{5,1},{4,3},{3,2},{3,1},{2,1}};
bool E[6][6],has[6][6];
void dfs(int it,int sz){
	if(sz==9){
		for(int i=0;i<sz;++i){
			cout << stk[i];
		}
		cout << "\n";
		return;
	}
	for(int i=1;i<=5;++i){
		if(E[it][i]&&!(has[it][i])&&!(has[i][it])){
			stk[sz]=i;
			has[it][i]=1;
			dfs(i,sz+1);
			has[it][i]=0;
		}
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	for(int i=0;i<e.size();++i)
		E[e[i].second][e[i].first]=E[e[i].first][e[i].second]=1;
	stk[0]=1;
	dfs(1,1);
}
