#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
inline long long int mod(long long int p){
	if(p<=1)return p+1;
	bool o=p&1;
	p>>=1;
	long long int tmp=mod(p);
	if(o)
		return tmp*tmp*2%1000000007;
	else
		return tmp*tmp%1000000007;
}
inline long long int read(){
	long long int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
inline void write(int x) {
	long long int stk[12],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	long long int p(read());
	while(p=read()){
		write(mod(p-1));
		putchar_unlocked('\n');
	}
} 
