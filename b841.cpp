#include <iostream>
using namespace std;
int n,m,a[10][10],ans;
bool jr(int x,int y,int t){
	if(a[x][y]==0)return 0;
	if(t){// ->
		if(y>=m-1)return 0;
		if(a[x][y+1]==0)return 0;
		if(a[x][y]!=a[x][y+1])return 0;
		return 1;
	}
	else{
		if(x>=n-1)return 0;
		if(a[x+1][y]==0)return 0;
		if(a[x][y]!=a[x+1][y])return 0;
		return 1;
	}
}
void dfs(int x,int y,int s){
	ans=max(s,ans);
	int st=y;
	for(int i=max(x-1,0);i<n;++i){
		for(int j=st;j<m;++j){
			if(jr(i,j,0)){
				int tmp=a[i][j];
				a[i][j]=a[i+1][j]=0;
				dfs(i,j+1,s+1);
				a[i][j]=a[i+1][j]=tmp;
			}
			else if(jr(i,j,1)){
				int tmp=a[i][j];
				a[i][j]=a[i][j+1]=0;
				dfs(i,j+1,s+1);
				a[i][j]=a[i][j+1]=tmp;
			}
		}
		st=0;
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(jr(i,j,0)){
				int tmp=a[i][j];
				a[i][j]=a[i+1][j]=0;
				dfs(i,j+1,1);
				a[i][j]=a[i+1][j]=tmp;
			}
			else if(jr(i,j,1)){
				int tmp=a[i][j];
				a[i][j]=a[i][j+1]=0;
				dfs(i,j+1,1);
				a[i][j]=a[i][j+1]=tmp;
			}
		}
	}
	cout << ans;
} 
