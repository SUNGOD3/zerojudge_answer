#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
using namespace std;
int water[101][101],mode,x,y;
bool tide[101][101];
inline void bfs1(int x,int y,int time){
	water[x][y]=time;
	if(x-1>=0&&tide[x-1][y]&&(water[x-1][y]==0||(water[x-1][y]!=0&&water[x-1][y]>time)))
		bfs1(x-1,y,time+1);
	if(x+1<101&&tide[x+1][y]&&(water[x+1][y]==0||(water[x+1][y]!=0&&water[x+1][y]>time)))
		bfs1(x+1,y,time+1);
	if(y-1>=0&&tide[x][y-1]&&(water[x][y-1]==0||(water[x][y-1]!=0&&water[x][y-1]>time)))
		bfs1(x,y-1,time+1);
	if(y+1<101&&tide[x][y+1]&&(water[x][y+1]==0||(water[x][y+1]!=0&&water[x][y+1]>time)))
		bfs1(x,y+1,time+1);
}
inline void bfs2(int x,int y,int time){
	water[x][y]=time;
	if(x+1<101&&tide[x+1][y]&&(water[x+1][y]==0||(water[x+1][y]!=0&&water[x+1][y]>time)))
		bfs2(x+1,y,time+1);
	if(y-1>=0&&tide[x][y-1]&&(water[x][y-1]==0||(water[x][y-1]!=0&&water[x][y-1]>time)))
		bfs2(x,y-1,time+1);
	if(y+1<101&&tide[x][y+1]&&(water[x][y+1]==0||(water[x][y+1]!=0&&water[x][y+1]>time)))
		bfs2(x,y+1,time+1);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int cas(0);
	while(cin >> mode){
		cin >> x >> y;
		for(int i(0),j(0);i<x;++i){
			for(j=0;j<y;++j){
				cin >> tide[i][j];
				water[i][j]=0;
			}
		}
		cout << "Case " << ++cas << ":\n";
		for(int j(0);j<y;++j){
			if(tide[0][j]){
				if(mode==2)
					bfs2(0,j,1);
				else
					bfs1(0,j,1);
				break;
			}
		}
		for(int i(0),j(0);i<x;++i){
			for(j=0;j<y;++j)
				cout << water[i][j] << " ";
			cout << "\n";
		}
	}
}
