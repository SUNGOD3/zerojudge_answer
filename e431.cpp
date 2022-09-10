#include <iostream>
using namespace std;
int m,n,a[13][13],t,ans;
void dfs(int x,int y,int step){
	if(x>=m||y>=n||x<0||y<0||a[x][y])return;
	if(step==t)++ans;
	a[x][y]=1;
	dfs(x+1,y,step+1);
	dfs(x-1,y,step+1);
	dfs(x,y+1,step+1);
	dfs(x,y-1,step+1);
	a[x][y]=0;
}
int main(){
	while(cin >> m >> n){
		t=m*n;
		ans=0;
		for(int i=0;i<m;++i)
			for(int j=0;j<n;++j)
				a[i][j]=0;
		for(int i=0;i<m;++i)
			for(int j=0;j<n;++j)
				dfs(i,j,1);
		cout << ans/2 << "\n";
	}
} 
