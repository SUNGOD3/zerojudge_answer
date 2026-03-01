#include <iostream>
using namespace std;
char a[1001][1001];
int m,n,ma,mi=1000001,t,tmp;
inline void dfs(int x,int y){
	if(x>=m||y>=n||x<0||y<0||a[x][y]!='W')return;
	a[x][y]='#';
	++tmp;
	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> m >> n;
	for(int i=0;i<m;++i)
		for(int j=0;j<n;++j)
			cin >> a[i][j];
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			if(a[i][j]=='W'){
				++t;
				tmp=0;
				dfs(i,j);
				ma=max(ma,tmp);
				mi=min(mi,tmp);	
			}
		}
	}
	if(ma==0)
		mi=0;
	cout << ma << " " << mi << " " << t ; 
} 
