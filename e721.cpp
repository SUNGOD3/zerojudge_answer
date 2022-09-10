#include <iostream>
using namespace std;
int dp[501][2],n,k,a[501];
int main(){
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> k;
		++a[k];
	}
	for(int i=1;i<501;++i){
		dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
		if(i==1)
			dp[i][1] = a[i];
		else
			dp[i][1] = a[i]*i+max(dp[i-2][1],dp[i-1][0]);
	}
	cout << max(dp[500][0],dp[500][1]); 
}
