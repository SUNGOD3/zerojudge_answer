#include <iostream>
#include <climits>
using namespace std;
long long a[35],dp[35][2005],n,c,ans=INT_MAX;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> a[n])++n;
	n--;
	c=a[n];
	for(int i=0;i<a[0];++i)
		dp[0][i]=INT_MAX;
	for(int i=a[0];i<=2000;++i)
		dp[0][i]=i-a[0];
	for(int i=1;i<n;++i){
		for(int j=0;j<=2000;++j)
			dp[i][j]=INT_MAX;
		for(int j=a[i],it=a[i]-c,it2=a[i]+c;j<=2000;++j,++it,++it2)
			for(int k=max(it,0);k<=min(it2,2000);++k)
				dp[i][j]=min(dp[i][j],dp[i-1][k]+j-a[i]);
	}
	for(int i=0;i<=2000;++i)
		ans=min(dp[n-1][i],ans);
	cout << ans;
}
