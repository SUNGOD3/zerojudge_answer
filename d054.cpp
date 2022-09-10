#include <stdio.h>
long long int dp[41]={1,1,5};
int main(){
	for(int i=3;i<41;i++)
		dp[i]=dp[i-1]+(dp[i-2]<<2)+(dp[i-3]<<1);
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%lld\n",dp[n]);
	}
}
