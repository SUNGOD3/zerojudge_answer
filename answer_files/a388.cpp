#include <iostream>
using namespace std;
long long dp[35][3],n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	dp[1][0]=dp[1][1]=1;//U,R
	for(int i=2;i<=30;++i){
		dp[i][0]+=dp[i-1][0]+dp[i-1][1]+dp[i-1][2];
		dp[i][1]+=dp[i-1][0];
		dp[i][2]+=dp[i-1][1];
		/*cout << i << " ";
		for(int j=0;j<3;++j){
			cout << dp[i][j] << " ";
		}
		cout << "\n";*/
	}
	while(cin >> n){
		if(n==0)break;
		cout << (1<<n)-(dp[n][0]+dp[n][1]+dp[n][2])<< "\n";
	}
} 
