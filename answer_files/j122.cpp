#include <bits/stdc++.h>
using namespace std;
long long n,t,dp[105][105],ans,mod=1000007;
char c;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		ans=0;
		memset(dp,0,sizeof(dp));
		cin >> n;
		for(int i=1;i<=n;++i)
			for(int j=1;j<=n;++j){
				cin >> c;
				if(c=='W')
					dp[i][j]=1;
				else if(c=='B')
					dp[i][j]=-1;
			}
		for(int i=n;i>=1;--i){
			for(int j=1;j<=n;++j){
				if(dp[i][j]>0){
					dp[i][j]%=mod;
					if(i==1)
						ans+=dp[i][j];
					else{
						if(dp[i-1][j+1]!=-1)
							dp[i-1][j+1]+=dp[i][j];
						else if(i>1&&j<n&&dp[i-1][j+1]==-1&&dp[i-2][j+2]!=-1)
							dp[i-2][j+2]+=dp[i][j];
						if(dp[i-1][j-1]!=-1)
							dp[i-1][j-1]+=dp[i][j];
						else if(i>1&&j>1&&dp[i-1][j-1]==-1&&dp[i-2][j-2]!=-1)
							dp[i-2][j-2]+=dp[i][j];
					}
				}
			}
		}
		cout << "Case " << ca << ": " << ans%mod << "\n";
	}
} 
