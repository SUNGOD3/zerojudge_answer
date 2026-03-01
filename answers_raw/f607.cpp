#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
#include <set>
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
inline void write(long long int x) {
	if(x==0)
		putchar_unlocked('0');
	else{
		long long int stk[15],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
int main(){
	set <int> a;
	set <int>::iterator it;
	int n=read(),l=read(),x,y,b[n]={0};
	long long int ans=0;
	for(int i=0;i<n;++i){
		x=read();
		y=read();
		b[y-1]=x;
	} 
	a.insert(0);
	a.insert(l);
	for(long long int i=0;i<n;++i){
		it=a.lower_bound(b[i]);
		ans+=*it-*--it;
		a.insert(b[i]);
	}
	write(ans);
} 
