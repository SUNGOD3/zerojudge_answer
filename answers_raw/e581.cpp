#include <iostream>
using namespace std;
long long dp[105][105],n,x,y,m,k,a[105][105];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n >> m){
		if(n==0&&m==0)break;
		cin >> k;
		++n;
		++m;
		for(int i=0;i<=n;++i){
			for(int j=0;j<=m;++j){
				dp[i][j]=a[i][j]=0;
			}
		}
		dp[1][1]=1;
		for(int i=0;i<k;++i){
			cin >> x >> y;
			++x;
			++y;
			a[x][y]=1;
		}
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				if(a[i][j]){
					dp[i][j]=0;
				} 
				else{
					dp[i][j]+=dp[i-1][j]+dp[i][j-1];
				}
			}
		}
		if(dp[n][m]==0){
			cout << "There is no path.\n";
		}
		else if(dp[n][m]==1){
			cout << "There is one path from Little Red Riding Hood's house to her grandmother's house.\n";
		} 
		else{
			cout << "There are " << dp[n][m] << " paths from Little Red Riding Hood's house to her grandmother's house.\n";
		}
	}
}
