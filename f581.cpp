#include <iostream>
#include <algorithm>
using namespace std;
long long int a[200001],dp[200001],n,m,ans,t,sum;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n;++i){
		cin >> a[i];
		if(i)
			dp[i]=a[i]+dp[i-1];
		else
			dp[i]=a[i];
		//cout << dp[i] << " ";
	}
	sum=dp[n-1];
	//cout << "\n";
	for(int i=0;i<m;++i){
		cin >> t;
		//cout << t << " ";
		t+=dp[ans]-a[ans];
		t%=sum;
		//cout << t << " ";
		if(t==0)
			ans=0;
		else
			ans=(lower_bound(dp,dp+n,t)-dp+1)%n;
		//cout << ans << '\n';
	}
	cout << ans ;
} 
