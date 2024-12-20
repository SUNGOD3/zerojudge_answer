#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define max( x, y )  ( ((x)>(y)) ? (x):(y) )
#include <stdio.h>
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
inline void write(int x) {
	int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int a[100000],it=0,ans[1000001];
int main(){
	while(a[it]=read())++it;
	int n=(it-1)/2,mx=a[it-1],ac=0;
	for(int i=0;i<n;++i)
		for(int j=mx-a[i];j>=0;--j)
			if(ans[j]||j==0){
				int jai=j+a[i];
				ans[jai]=max(ans[jai],ans[j]+a[i+n]);
				ac=max(ans[jai],ac);
			}
	write(ac);
} 
