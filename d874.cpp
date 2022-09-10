#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
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
	int stk[4],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int dp[20001];
int main(){
	for(int i(1),c(1),z,cc(1);i<=20001;c+=2,++cc){
		for(z=0;z<cc;++z)
			dp[i++]=c;
		for(z=0;z<cc;++z)
			dp[i++]=c+1;
	}
	int a;
	while(a=read()){
		write(dp[a]);
		putchar_unlocked(10);
	}
} 
