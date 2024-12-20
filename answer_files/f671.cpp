#include <iostream>
using namespace std;
int n,m,ans=-1,nm,r[11][11];
char a[11][11];
void dfs(int x,int y,int s){
	if(x<0||y<0||x>=n||y>=m||a[x][y]=='#'||s>=nm||s>=r[x][y])return;
	r[x][y]=s;
	if(x==n-1&&y==m-1){
		if(ans==-1){
			ans=s;
		}
		else{
			ans=min(ans,s);
		}
		return;
	} 
	dfs(x+1,y,s+1);
	dfs(x-1,y,s+1);
	dfs(x,y+1,s+1);
	dfs(x,y-1,s+1);
}
int main(){
	cin >> n >> m;
	nm=n*m;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			r[i][j]=nm;
			cin >> a[i][j];
		}
	}
	dfs(0,0,0);
	cout << ans;
} 
