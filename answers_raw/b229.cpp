#include <stdio.h>
unsigned long long dp[51]={1,3};
int n;
int main(){
	for(int i=2;i<=50;++i)
		dp[i]=(dp[i-1]<<1)+dp[i-2];
	while(scanf("%d",&n)>0)
		printf("%llu\n",dp[n]);
} 
