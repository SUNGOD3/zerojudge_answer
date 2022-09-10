#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
struct shop{
	int pi,di;
};
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
		int stk[9],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
inline bool cmp(shop x,shop y){
	if(x.di>y.di||(x.di==y.di&&x.pi>y.pi))return 1;
	return 0;
}
int main(){
	int n;
	while(n=read()){
		int mt=0,ans=0,it=0;
		shop a[n];
		for(int i=0;i<n;++i){
			a[i].pi=read();
			a[i].di=read();
			mt=max(mt,a[i].di); 
		}
		sort(a,a+n,cmp);
		priority_queue< int > b;
		while(mt>0){
			while(it<n&&a[it].di==mt){
				b.push(a[it].pi);
				++it;
			}
			if(!b.empty()){
				ans+=b.top();
				b.pop();
			}
			--mt;
		}
		write(ans);
		putchar_unlocked('\n');
		getchar_unlocked();
	}
}
