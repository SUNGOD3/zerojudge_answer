#include <iostream>
using namespace std;
long long int k,n,m,ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> k >> n >> m;
	long long int dp[n][m],a[n][m];
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin >> a[i][j];
			if(i==0&&j==0){
				dp[i][j]=a[i][j];
			}
			else if(i==0){
				dp[i][j]=dp[i][j-1]+a[i][j];
			}
			else if(j==0){
				dp[i][j]=dp[i-1][j]+a[i][j];
			}
			else{
				dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+a[i][j];
			}
			long long int tmp=dp[i][j],v;
			for(int ii=0;ii<=i;++ii){
				for(int jj=0;jj<=j;++jj){
					if(ii==0&&jj==0){
						v=tmp;
					}
					else if(ii==0){
						v=tmp-dp[i][jj-1];
					}
					else if(jj==0){
						v=tmp-dp[ii-1][j];
					}
					else{
						v=tmp-dp[i][jj-1]-dp[ii-1][j]+dp[ii-1][jj-1];
					}
					if(v<=k)ans=max(ans,v);
				}
			}
		}
	}
	cout << ans << "\n";
} 
