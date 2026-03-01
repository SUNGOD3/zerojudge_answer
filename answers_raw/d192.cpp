#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
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
	if(x==0)
		putchar_unlocked('0');
	else{
		int stk[9],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
int main(){
	int t=read(),n,q;
	for(int ca=1;ca<=t;++ca){
		int ans=0;
		n=read();
		q=read();
		for(int i=1;i<=n;++i)
			ans=(ans+q)%i;
		putchar_unlocked('C');
		putchar_unlocked('a');
		putchar_unlocked('s');
		putchar_unlocked('e');
		putchar_unlocked(' ');
		write(ca);
		putchar_unlocked(':');
		putchar_unlocked(' ');
		write(ans+1);
		putchar_unlocked('\n'); 
	}
} 
