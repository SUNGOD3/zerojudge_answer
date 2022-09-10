#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
#define max( x, y ) ( ((x)>(y)) ? (x):(y) )
int main(){
	int a1,b1,c1,a2,b2,c2,n,ans=-100000;
	scanf("%d%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2,&n);
	for(int i=0,r=n;i<=n;++i,--r){
		ans=max(ans,a1*i*i+b1*i+a2*r*r+b2*r);
	}
	printf("%d",ans+c1+c2);
}
