#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int main(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	if(a&1)++a;
	a=(a*a>>2);
	int stk[9]={0},*ptr(&stk[0]);
	while(a){*ptr=a%10;a/=10;++ptr;}
	while(--ptr>=(&stk[0]))putchar_unlocked(*ptr+'0');
} 
