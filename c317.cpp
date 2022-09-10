#include <iostream>
using namespace std;
int main(){
	int t,x,a,b;
	cin >> t;
	while(t--){
		cin >> x >> a >> b;
		int dp[x+1]={0};
		for(int i=0;i*a<=x;++i)
			dp[a*i]=i;
		for(int i=0;i<=x-b;++i){
			if(dp[i]||i==0){
				if(dp[i+b]==0)
					dp[i+b]=dp[i]+1;
				else
					dp[i+b]=min(dp[i+b],dp[i]+1);
			}
		}
		if(dp[x])
			cout << dp[x] << "\n";
		else
			cout << "-1\n";
	}
} 
