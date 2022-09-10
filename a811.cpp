#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <algorithm>
using namespace std;
inline long long int gcd(long long int a,long long int b){
	if (b)
        while((a %= b) && (b %= a));
	return a+b;
}
inline long long int read(){
	long long int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
inline void write(long long int x) {
	long long int stk[12],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	long long int c(read());
	while(c=read()){
		long long int k[c];
		for(int i(0);i<c;++i)
			k[i]=read();
		sort(k,k+c);
		--c;
		for(int i(0);i<c;++i){
			k[i]=k[i+1]-k[i];
			if(i)
				k[i]=gcd(k[i],k[i-1]);
		}
		write(k[c-1]);
		putchar_unlocked('\n');
	}
} 
