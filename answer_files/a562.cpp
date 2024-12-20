#include <iostream>
using namespace std;
int ans,a[10][10],n,c,r[105],f[10][10],rc[105];
void dfs(int x,int y,int v,int p){
	if(x<0||y<0||x>=n||y>=n||r[a[x][y]]||f[x][y]||p+v<=ans)return;
	f[x][y]=r[a[x][y]]=1;
	p-=rc[a[x][y]];
	ans = max(ans,v);
	dfs(x-1,y,v+1,p);
	dfs(x+1,y,v+1,p);
	dfs(x,y+1,v+1,p);
	dfs(x,y-1,v+1,p);
	f[x][y]=r[a[x][y]]=0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> c;
	while(c--){
		cin >> n;
		for(int i=0;i<101;++i)
			r[i]=rc[i]=0;
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j){
				f[i][j]=0;
				cin >> a[i][j];
				++rc[a[i][j]];
			}
		ans=0;
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j)
				dfs(i,j,1,n*n);
		cout << ans << '\n';
	}
	
} 
