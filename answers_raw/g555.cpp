#include <iostream>
using namespace std;
long long dp[200005][3],mod=998244353,t,n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	dp[0][0]=dp[0][1]=1;
	for(int i=0;i<=200000;++i){
		dp[i+1][0]=(dp[i+1][0]+dp[i][0]+dp[i][1])%mod;
		dp[i+1][1]=(dp[i+1][1]+dp[i][0])%mod;
		dp[i][0]%=mod;
		dp[i][1]%=mod;
		dp[i][2]=(dp[i][0]+dp[i][1]-1)%mod;
	}
	cin >> t;
	for(int i=0;i<t;++i){
		cin >> n;
		cout << dp[n-1][2] << "\n";
	}
}
