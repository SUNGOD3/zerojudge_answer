#include <iostream>
using namespace std;
char mp[21][21],l;
int x,y,a,b,ans;
inline void dfs(int xx,int yy){
	if(xx>=x||yy>=y||xx<0||yy<0||mp[xx][yy]!=l)return;
 	mp[xx][yy]=' ';
	++ans;
	dfs(xx+1,yy);
	dfs(xx-1,yy);
	dfs(xx,yy+1);
	dfs(xx,yy-1);
	if(yy==0)
		dfs(xx,y-1);
	if(yy==y-1)
		dfs(xx,0);
}
inline void clear(int xx,int yy){
	if(xx>=x||yy>=y||xx<0||yy<0||mp[xx][yy]!=l)return;
 	mp[xx][yy]=' ';
 	dfs(xx+1,yy);
	dfs(xx-1,yy);
	dfs(xx,yy+1);
	dfs(xx,yy-1);
	if(yy==0)
		dfs(xx,y-1);
	if(yy==y-1)
		dfs(xx,0);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> x >> y){
		int maxn=0;
		for(int i=0;i<x;++i)
			for(int j=0;j<y;++j)
				cin >> mp[i][j];
		ans=0;
		cin >> a >> b;
		l=mp[a][b];
		clear(a,b);
		for(int i=0;i<x;++i)
			for(int j=0;j<y;++j)
				if(mp[i][j]==l){
					ans=0;
					dfs(i,j);
					maxn=max(maxn,ans);
				}
		cout << maxn << "\n"; 
	}
} 
