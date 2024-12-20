#include <iostream>
using namespace std;
int n,m,dp[201][201],ans;
bool a[201][201];
int main(){
	while(cin >> n >> m){
		for(int i=0;i<201;++i){
			for(int j=0;j<201;++j){
				dp[i][j]=0;
				a[i][j]=0;
			}
		}
		ans=0;
		for(int i=0;i<n;++i)
			for(int j=0;j<m;++j)
				cin >> a[i][j];
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				if(a[i][j]){
					for(int jj=j;jj>=0;--jj){
						if(a[i][jj])
							++dp[i][j];
						else
							break;
					}
				}
			}
		}
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				if(a[i][j]){
					if(dp[i][j]*(n-i)>ans){
						for(int k=1;k<=dp[i][j];++k){
							int tmp=0;
							for(int ii=i;ii<n;++ii){
								if(dp[ii][j]>=k)
									tmp+=k;
								else{
									ans=max(tmp,ans);
									break;
								}
							}
						}
					}
				}
			}
		}
		cout << ans << "\n";
	}
} 
