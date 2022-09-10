#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
using namespace std;
bool p[102][102];
int ansx,ansy;
inline void bfs(int x,int y){
	p[x][y]=0;
	for(int i(-1);i<=1;++i){
		for(int j(-1);j<=1;++j){
			if(x+i>=0&&y+j>=0&&p[x+i][y+j]){
				bfs(x+i,y+j);
				return;	
			}
		}
	}
	for(int i(-2);i<=2;++i){
		for(int j(-2);j<=2;++j){
			if(x+i>=0&&y+j>=0&&p[x+i][y+j]){
				bfs(x+i,y+j);
				return;	
			}
		}
	}
	ansx=x,ansy=y;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int x,y;
	while(cin >> x >> y){
		if(x==0)return 0;
		for(int i(0);i<x;++i)
			for(int j(0);j<y;++j)
				cin >> p[i][j];
		cin >> x >> y;
		bfs(x,y);
		cout << ansx << " " << ansy << "\n";
	}
}
