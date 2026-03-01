#include<bits/stdc++.h>
using namespace std;
long long n,a[10005],dp[10005],gt[10005],ans[10005];
int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    while(cin >> n){
    	if(n==0)break;
    	memset(dp,0x3f,sizeof(dp));
    	dp[0]=0;
		for(int i=1;i<=n;++i){
    		cin >> a[i];
			for(int j=0;j<i;++j){
				if(dp[j]+(200-a[i]+a[j])*(200-a[i]+a[j])<dp[i]){
					dp[i]=dp[j]+(200-a[i]+a[j])*(200-a[i]+a[j]);
					gt[i]=j;
				}
			}
		}
		int sz=0,it=n;
		while(it){
			ans[sz++]=it;
			it=gt[it];
		}
		cout << "0 ";
		for(int i=sz-1;i>=0;--i){
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
}
 
