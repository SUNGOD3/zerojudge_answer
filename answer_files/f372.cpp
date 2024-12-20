#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
inline int read(){
	int a(0),f(1);
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
inline void write(int x) {
	if(x==0)
		putchar_unlocked('0');
	else{
		int stk[6],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
inline int mod(int p,int m){
	if(p==0)return 1;
	if(p==1)return 3;
	bool o=p&1;
	p>>=1;
	int tmp=mod(p,m);
	if(o)
		return tmp*tmp*3%m;
	else
		return tmp*tmp%m;
}
int main(){
	int n;
	while(n=read()){
		write(mod(n,10007));
		putchar_unlocked('\n');
	}
} 
