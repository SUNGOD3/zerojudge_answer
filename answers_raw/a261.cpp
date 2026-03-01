#include <iostream>
using namespace std;
long long dp[64][105],n,k;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	for(int i=1;i<=63;++i)
		for(int j=1;j<=100;++j)
			dp[i][j]=dp[i-1][j-1]+1+dp[i-1][j];
	while(cin >> k >> n){
		if(k==0)return 0;
		bool ac=0;
		for(int i=1;i<=63;++i)
			if(dp[i][k]>=n){
				ac=1;
				cout << i << "\n";
				break;
			}
		if(ac==0)
			cout << "More than 63 trials needed.\n";
	}
}
