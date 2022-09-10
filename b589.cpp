#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		if(n==0)break;
		int c[n+2],dp[n+2],maxn=0;
		for(int i=0;i<n;++i)
			cin >> c[i];
		c[n]=0;
		c[n+1]=0;
		dp[0]=0;
		dp[1]=c[0];
		for(int i=2;i<n+2;++i){
			dp[i]=max(c[i-2]*2+dp[i-2],dp[i-1]+c[i-1]);
			if(dp[i]>maxn){
				maxn=dp[i];
			}
		}
		cout << maxn << "\n";
	}
}
