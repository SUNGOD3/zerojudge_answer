#include <iostream>
using namespace std;
int dp[3005][3005],a[3005][3005],n,m,ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin >> a[i][j];
		}
	}
	for(int i=n-1;i>=0;--i){
		for(int j=m-1;j>=0;--j){
			dp[i][j]=a[i][j];
			if(i!=n-1){
				dp[i][j]=max(dp[i+1][j]+a[i][j],dp[i][j]);
			}
			if(j!=m-1){
				dp[i][j]=max(dp[i][j+1]+a[i][j],dp[i][j]);
			}
			ans=max(dp[i][j],ans);
		}
	}
	cout << ans;
} 
