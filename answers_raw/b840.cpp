#include <iostream>
using namespace std;
int a[25][25],n,ans,dp[25][25];
int main(){
	cin >> n;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			cin >> a[i][j];
			dp[i][j]=a[i][j]+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
		}
	}
	for(int i=0;i<=n;++i){
		for(int j=0;j<=n;++j){
			for(int ii=i;ii<=n;++ii){
				for(int jj=j;jj<=n;++jj){
					ans=max(ans,dp[ii][jj]-dp[i][jj]-dp[ii][j]+dp[i][j]);
				}
			}
		}
	}
	cout << ans;
} 
