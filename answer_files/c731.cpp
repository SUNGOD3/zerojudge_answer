#include <iostream>
using namespace std;
int dp[10001][4],n;
int main(){
	dp[1][0]=dp[1][1]=dp[1][2]=1;
	dp[1][3]=3;
	for(int i=2;i<10001;++i){
		dp[i][0]=(dp[i-1][0]+dp[i-1][1])%12345;
		dp[i][1]=(dp[i-1][0]+dp[i-1][1]+dp[i-1][2])%12345;
		dp[i][2]=(dp[i-1][1]+dp[i-1][2])%12345;	
		dp[i][3]=(dp[i][0]+dp[i][1]+dp[i][2])%12345;
	}
	while(cin >> n)
		cout << dp[n][3] << "\n";
} 
