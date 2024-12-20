#include <iostream>
using namespace std;
long long int a[22],n,dp[20001]={1};
int main(){
	for(int i=0;i<22;++i)
		a[i]=i*i*i;
	for(int i=22;i>0;--i)
		for(int j=0;j<=10000;++j)
			if(dp[j]!=0)
				dp[j+a[i]]+=dp[j];
	while(cin >> n)
		cout << dp[n]/2 << "\n";
} 
