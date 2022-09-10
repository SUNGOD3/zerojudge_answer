#include <iostream>
using namespace std;
struct boss{
	int x,y,xv,yv;
	bool live;
};
boss boss[505];
int boom[105][105],next[105][105],n,m,q,t;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m >> q;
	t=q;
	for(int i=0;i<q;++i){
		cin >> boss[i].x >> boss[i].y >> boss[i].xv >> boss[i].yv;
		boss[i].live=1;
	}
	while(t>0){
		for(int i=0;i<q;++i){
			if(boss[i].live){
				boom[boss[i].x][boss[i].y]=1;
			}
		}
		for(int i=0;i<q;++i){
			if(boss[i].live){
				boss[i].x+=boss[i].xv;
				boss[i].y+=boss[i].yv;
				if(boss[i].x>=n||boss[i].y>=m||boss[i].x<0||boss[i].y<0){
					boss[i].live=0;
					--t;
				}
				else if(boom[boss[i].x][boss[i].y]){
					boom[boss[i].x][boss[i].y]=-1;
					boss[i].live=0;
					--t;
				}
			}
		}
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				if(boom[i][j]==-1)boom[i][j]=0;
			}
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			t+=boom[i][j];
		}
	}
	cout << t;
} 
