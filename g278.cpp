#include <iostream>
using namespace std;
int f[1000005],n,m,c[100005],a,dp[2][1000005],ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n >> m;
	for(int i=1;i<=n;++i){
		cin >> a;
		f[i]=max(c[a],f[i-1]);
		c[a]=i;
	}
	for(int i=1;i<=m;++i)
		for(int j=1;j<=n;++j)
			dp[i&1][j]=max(dp[i&1][j-1],dp[(i-1)&1][f[j]]+j-f[j]);
	for(int i=1;i<=n;++i)
		ans=max(dp[m&1][i],ans);
	cout << ans;
} 
