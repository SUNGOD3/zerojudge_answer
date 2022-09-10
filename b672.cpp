#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,a;
	while(n=read()){
		if(!n)break;
		int dp[n+1]={0};
		for(int i=0;i<n;++i){
			a=read();
			for(int j=i+1,k=dp[i]+1,z=min(a+i,n);j<=z;++j)
				if(j>4)
					(!dp[j])?dp[j]=k:dp[j]=min(k,dp[j]);
		}
		cout << dp[n] << "\n";
	}
} 
