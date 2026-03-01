#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <algorithm>
using namespace std;
struct p{
	int atk,def;
};
inline bool cmp(p x,p y){
	if(x.atk<y.atk||(x.atk==y.atk&&x.def<y.def))return 1;
	return 0;
}
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
	cin.tie(0); ios::sync_with_stdio(false);
	int n=read();
	p a[n];
	for(int i=0;i<n;++i){
		a[i].def=read();
	}
	a[0].atk=a[0].def;
	a[n-1].atk=a[n-1].def;
	for(int i=1;i<n-1;++i){
		a[i].atk=a[i-1].def+a[i+1].def;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;++i){
		write(a[i].atk);
		putchar_unlocked(' ');
		write(a[i].def);
		putchar_unlocked('\n'); 
	}
} 
