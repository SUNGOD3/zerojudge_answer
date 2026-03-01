#include <iostream>
using namespace std;
int t,n,m,sn,sm,ans,dp[105][105];
char mp[105][105],p[105][105];
bool judge(int x,int y){
	if(x>=n||y>=m||x<0||y<0||mp[x][y]=='A'||mp[x][y]=='B')return 0;
	return 1;
}
void zfs(int x,int y){
	for(int i=1;i<=2;++i){
		for(int j=1;j<=2;++j){
			if(i+j==3){
				if(judge(x+i,y+j)){
					p[x+i][y+j]='Z';
				}
				if(judge(x-i,y+j)){
					p[x-i][y+j]='Z';
				}
				if(judge(x+i,y-j)){
					p[x+i][y-j]='Z';
				}
				if(judge(x-i,y-j)){
					p[x-i][y-j]='Z';
				}
			}
		}
	}
}
void dfs(int x,int y,int s){
	if(x<0||y<0||x>=n||y>=m||s>=ans||s>=dp[x][y]||p[x][y]=='Z')return;
	dp[x][y]=min(s,dp[x][y]);
	if(p[x][y]=='B'){
		ans=min(s,ans);
		return;
	}
	for(int i=-1;i<=1;++i)
		for(int j=-1;j<=1;++j)
			if(i||j)dfs(x+i,y+j,s+1);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> n >> m;
		ans=n*m+1;
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				dp[i][j]=ans;
				cin >> mp[i][j];
				p[i][j]=mp[i][j];
				if(p[i][j]=='A'){
					sn=i;
					sm=j;
				}
			}
		}
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				if(mp[i][j]=='Z'){
					zfs(i,j);
				}
			}
		}
		dfs(sn,sm,0);
		if(ans==n*m+1){
			cout << "King Peter, you can't go now!\n";
		}
		else{
			cout << "Minimal possible length of a trip is " << ans << '\n';
		}
	}
} 
