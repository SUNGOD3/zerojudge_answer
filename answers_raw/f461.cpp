#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
#include <algorithm>
long long int a[100001],n;
inline long long int read(){
	long long int a(0),f(1);
	char c('0');
	while(c>='0'||c=='-'){
		if(c=='-'){
			f=-1;
			c=getchar_unlocked();
		}
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a*f;
}
inline void write(long long int x) {
	if(x==0)
		putchar_unlocked('0');
	else{
		long long int stk[32],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
int main(){
	while(scanf("%lld",&n)>0){
		getchar_unlocked();
		for(int i=0;i<n;++i)a[i]=read();
		long long int ans=0,nn=(n>>1),sum=0;
		std::sort(a,a+n);
		for(int i=0,r=n-i-1;i<nn;++i,--r){
			sum+=a[r]-a[i];
			ans+=sum;
		}
		ans*=2;
		if(n%2==0)ans-=sum;
		write(ans);
		putchar_unlocked('\n');
	}
}
