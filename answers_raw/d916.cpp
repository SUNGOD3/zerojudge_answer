#include <iostream>
using namespace std;
int dp[3005][2],n,m;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	dp[1][0]=dp[1][1]=1;
	for(int i=2;i<=n;++i){
		dp[i][0]+=dp[i-1][0]+dp[i-1][1];
		dp[i][1]=1;
		if(i>m+1){
			dp[i][1]+=dp[i-m-1][1];
			dp[i][1]+=dp[i-m-1][0]-1;
		}
		dp[i][0]%=10000;
		dp[i][1]%=10000;
		//cout << dp[i][0] << " " << dp[i][1] << "\n";
	}
	cout << (dp[n][0]+dp[n][1])%10000;
} 
