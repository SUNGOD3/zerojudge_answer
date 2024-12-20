#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <algorithm>
using namespace std;
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
	int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	int n=read(),q=read(),b,c;
	int a[n];
	for(int i=0;i<n;++i)
		a[i]=read();
	sort(a,a+n);
	while(q--){
		b=read();
		c=read();
		int z=1;
		bool ans=0;
		while(b--)
			z*=10;
		for(int i=0;i<n;++i){
			if(a[i]%z==c){
				write(a[i]);
				putchar_unlocked('\n');
				ans=1;
				break;
			}
		}
		if(ans==0){
			putchar_unlocked('-');
			putchar_unlocked('1');
			putchar_unlocked('\n');
		}
	}
} 
