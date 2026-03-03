#include <iostream>
using namespace std;
int dp[1001][1001], n, m, ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cin >> dp[i][j];
			dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
			for(int k=ans+1;k<=min(i, j);++k){
				if(dp[i][j]-dp[i-k][j]-dp[i][j-k]+dp[i-k][j-k]==k*k){
					ans=k;
				}		
				else{
					break;
				}	
			}
		}
	}
	cout << ans;
}
