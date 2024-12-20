#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
inline void write(long long int x) {
	long long int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
inline long long int mod(long long int p){
	if(p<=1)return p+1;
	bool o=p&1;
	p>>=1;
	long long int tmp=mod(p);
	if(o)
		return tmp*tmp*2%1234567;
	else
		return tmp*tmp%1234567;
}
int main(){
	long long int p;
	while(scanf("%lld",&p)>0){
		if(p>0)
			write(mod(p-1));
		else
			putchar_unlocked('0');
		putchar_unlocked('\n');
	}
} 
