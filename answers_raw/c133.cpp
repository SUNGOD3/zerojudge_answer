#include <iostream>
using namespace std;
int n,ans;
char a[5][5];
bool judge(int x,int y){
	if(a[x][y]=='X'){
		return 0;
	}
	for(int i=1;i<n;++i){
		if(i+x>=n||a[i+x][y]=='X')break;
		if(a[i+x][y]=='O')return 0;
	}
	for(int i=1;i<n;++i){
		if(x-i<0||a[x-i][y]=='X')break;
		if(a[x-i][y]=='O')return 0;
	}
	for(int i=1;i<n;++i){
		if(i+y>=n||a[x][y+i]=='X')break;
		if(a[x][y+i]=='O')return 0;
	}
	for(int i=1;i<n;++i){
		if(y-i<0||a[x][y-i]=='X')break;
		if(a[x][y-i]=='O')return 0;
	}
	return 1;
}
void dfs(int x,int y,int v){
	ans=max(ans,v);
	for(int i=x;i<n;++i){
		for(int j=(x==i?y+1:0);j<n;++j){
			if(judge(i,j)){
				a[i][j]='O';
				dfs(i,j,v+1);
				a[i][j]='.';
			}
		}
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		if(n==0)break;
		ans=0;
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				cin >> a[i][j];
			}
		}
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				if(judge(i,j)){
					a[i][j]='O';
					dfs(i,j,1);
					a[i][j]='.';
				}
			}
		}
		cout << ans << "\n";
	}	
} 
