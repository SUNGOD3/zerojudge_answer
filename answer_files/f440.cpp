#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
#include <algorithm>
using namespace std;
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
	if(x==0)
		putchar_unlocked('0');
	else{
		int stk[9],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
int t,n,g;
struct bp{
	int p,w;
};
int main(){
	t=read();
	while(t--){
		n=read();
		bp a[1001];
		int ans=0,h;
		for(int i=0;i<n;++i){
			a[i].p=read();
			a[i].w=read();
		}
		g=read();
		int b[g],ma=0,mi=0;
		for(int i=0;i<g;++i){
			b[i]=read();
			ma=max(b[i],ma);
		}
		int c[ma+1]={0};
		for(int i=0;i<n;++i)
			for(int j=ma-a[i].w;j>=0;--j)
				if(!j||c[j])
					c[j+a[i].w]=max(c[j+a[i].w],c[j]+a[i].p);
		for(int i=0;i<=ma;++i){
			mi=max(c[i],mi);
			c[i]=mi;
		}
		for(int i=0;i<g;++i)
			ans+=c[b[i]];
		write(ans);
		putchar_unlocked('\n');
	}
}
