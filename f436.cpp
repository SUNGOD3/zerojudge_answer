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
int main(){
	int t,n,m,a,b;
	while(t=read()){
		if(t==0)break;
		n=read();
		m=read();
		while(t--){
			a=read();
			b=read(); 
			if(a==n||b==m)
				puts("divisa");
			else if(a>n&&b>m){
				putchar_unlocked('N');
				putchar_unlocked('E');
				putchar_unlocked('\n');
			}
			else if(a<n&&b<m){
				putchar_unlocked('S');
				putchar_unlocked('O');
				putchar_unlocked('\n');
			}
			else if(a>n&&b<m){
				putchar_unlocked('S');
				putchar_unlocked('E');
				putchar_unlocked('\n');
			}
			else{
				putchar_unlocked('N');
				putchar_unlocked('O');
				putchar_unlocked('\n');
			}
		}
	}
} 
