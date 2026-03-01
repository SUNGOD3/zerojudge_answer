#include <iostream>
using namespace std;
long long int dp[10005]={1,1},n;
int main(){
	for(int i=2;i<=10001;++i){
		dp[i]=dp[i-1]+dp[i-2];
		dp[i]%=1000000007;
	}
	while(cin >> n)
		cout << dp[n] << "\n";
} 
