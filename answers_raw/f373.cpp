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
	int n,a,b;
	n=read();
	b=n-(n/1000*100);
	a=n-(n/2000*200);
	if(a<=b){
		write(a);
		putchar_unlocked(' ');
		putchar_unlocked('0');
	}
	else{
		write(b);
		putchar_unlocked(' ');
		putchar_unlocked('1');
	}
} 
