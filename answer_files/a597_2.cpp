#include <iostream>
using namespace std;
int m,n,tmp,ans,total,to;
bool mp[501][501];
char c;
void dfs(int x,int y){
	if(x<0||y<0||x>=m||y>=n||mp[x][y]==0)return;
	++tmp;
	mp[x][y]=0;
	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> m >> n){
		ans=tmp=total=to=0;
		for(int i=0;i<m;++i){
			for(int j=0;j<n;++j){
				cin >> c;
				if(c=='J'){
					mp[i][j]=1;
					++to;
				}
				else
					mp[i][j]=0;
			}
		}
		if(m*n-to<min(m,n)){
			cout << "1 " << to << "\n";
		}
		else{
			for(int i=0;i<m;++i){
				for(int j=0;j<n;++j){
					if(mp[i][j]){
						tmp=0;
						++total;
						dfs(i,j);
						ans=max(tmp,ans);
					}
				}
			}
			cout << total << " " << ans << "\n";
		}
	}
}
