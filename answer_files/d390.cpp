#include <iostream>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n],sum=0;
		for(int i=0;i<n;++i){
			cin >> a[i];
			sum+=a[i];
		} 
		int dps=(sum>>1),min=sum;
		bool dp[dps+1]={1};
		for(int i=0;i<n;++i){
			for(int j=dps;j>=0;--j)
				if(dp[j]==1&&j+a[i]<=dps)
					dp[j+a[i]]=1;
			if(dp[dps]==1)break;		
		}
		for(int k=dps;k>=0;--k){
			if(dp[k]==1){
				cout << abs(sum-2*k) << "\n";
				break;
			}
		}
	}
} 
