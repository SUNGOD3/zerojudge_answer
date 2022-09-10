#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
long long int a,b,m,ans;
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
	long long int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
inline long long int bs(long long int l,long long int r){
	if(l>r)return l;
	m=(l+r)/2;ans=(a+m)*(m-a+1)/2;
	return(ans>=b)?bs(l,m-1):bs(m+1,r);
}
int main(){
	while(a=read()){
		b=read();
		write(bs(a,100000000));
		putchar_unlocked('\n');
	}
} 
