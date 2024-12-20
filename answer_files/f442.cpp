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
		int stk[6],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
int main(){
	int n=read(),e,m,t;
	int a[n];
	for(int i=0;i<n;++i)
		a[i]=read(); 
	e=read();
	m=read();
	while(m--){
		t=read();
		for(int i=0;i<n;++i)
			if(a[i]==t){
				a[i]=e;
				e=t;
				break;
			}
	}
	for(int i=0;i<n;++i){
		write(a[i]);
		putchar_unlocked(' ');
	}
} 
