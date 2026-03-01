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
	int stk[5],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int c,l,a,mn=10001,mn2=10001;
int main(){
	c=read();
	while(c--){
		a=read();
		if(a<=mn){
			mn2=mn;
			mn=a;
		}
		else if(a<mn2)
			mn2=a;
	}
	getchar_unlocked();
	l=read();
	int k=l-mn;
	if(k>mn2-l)
		puts("You are too black!");
	else{
		if(k<=0)
			putchar_unlocked('0');
		else
			write(k);
	}
}
