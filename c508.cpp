#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
#include <algorithm>
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
	if(x==0){
		putchar_unlocked('0');
		return;
	}
	int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int a[100001];
int main(){
	int n,t=-1;
	n=read();
	for(int i=0;i<n;++i)
		a[i]=read(); 
	std::sort(a,a+n);
	for(int i=0;i<n;++i){
		write(a[i]);
		putchar_unlocked(' ');
	}
	putchar_unlocked('\n');
	for(int i=n-1;i>=0;--i){
		if(t!=a[i]){
			write(a[i]);
			putchar_unlocked(' ');
			t=a[i];
		}
	}
} 
