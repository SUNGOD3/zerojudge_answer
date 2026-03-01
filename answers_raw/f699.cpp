#include <iostream>
#include <algorithm>
using namespace std;
int a[101][101],b[101][101],n,m,ans[101],it;
inline void bfs(int x,int y,int step){
	if(x>=n||y>=m||x<0||y<0||a[x][y]==2||step>=b[x][y])return;
	b[x][y]=step;
	bfs(x+1,y,step+1);
	bfs(x-1,y,step+1);
	bfs(x,y+1,step+1);
	bfs(x,y-1,step+1);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j){
			cin >> a[i][j]; 
			b[i][j]=999;
		}
	bfs(0,0,0);
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			if(a[i][j]==1&&b[i][j]!=999){
				ans[it]=b[i][j];
				++it;
			}
	if(it==0)
		cout << "¹Åªo¡I";
	else{
		sort(ans,ans+it);
		for(int i=0;i<it;++i)
			cout << ans[i] << "\n";
	}
} 
