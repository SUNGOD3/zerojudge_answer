#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int n;
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
	if(x==0){
		putchar_unlocked('0');
		return;
	}
	int stk[11],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	n=read();
	int a[n];
	for(int i=0;i<n;++i){
		a[i]=read();
	}
	for(int i=n-1;i>=0;--i){
		if(a[i]<0){
			putchar_unlocked('-');
			write(a[i]*-1);
		}
		else{
			write(a[i]);
		}
		putchar_unlocked(' ');
	}
} 
