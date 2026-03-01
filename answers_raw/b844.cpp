#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <algorithm>
using namespace std;
int a[500001];
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
int main(){
	int n,q,t;
	while(n=read()){
		q=read();
		for(int i=0;i<n;++i)
			a[i]=read();
		sort(a,a+n);
		while(q--){
			t=read();
			putchar_unlocked(((upper_bound(a,a+n,t)-a)&1)+48);
			putchar_unlocked('\n');
		}
	}
} 
