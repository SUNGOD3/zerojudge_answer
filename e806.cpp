#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
using namespace std;
int a[1002],t,it,all;
inline int read(){
	int a(0),r(1);
	char c('0');
	while(c>='0'&&c<='9'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
		if(c=='-'){
			r=-1;
			c=getchar_unlocked();
		}
	}
	return a*r;
}
inline void write(int x) {
	if(x==0)putchar_unlocked('0');
	int stk[9],*ptr(&stk[0]);
	if(x<0){
		putchar_unlocked('-');
		x*=-1;
	}
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	t=read();
	while(t--){
		it=read();
		a[it]=read();
	}
	t=read();
	while(t--){
		it=read();
		a[it]+=read();
	}
	for(int i=1000;i>=0;--i){
		if(a[i]){
			all=1;
			write(i);
			putchar_unlocked(':');
			write(a[i]);
			putchar_unlocked('\n');
		}
	}
	if(!all){
		putchar_unlocked('N');
		putchar_unlocked('U');
		putchar_unlocked('L');
		putchar_unlocked('L');
		putchar_unlocked('!');
	}
} 
