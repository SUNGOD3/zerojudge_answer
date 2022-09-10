#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
long long int a,x,t,lsum;
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
	if(x==0)
		putchar_unlocked('0');
	else{
		int stk[21],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
long long int bs(long long int l,long long int r){
	if(l>r)return l;
	long long int m=(l+r)/2,sum=(m+1)*m/2-lsum;
	return (sum>=x)?bs(l,m-1):bs(m+1,r);
}
int main(){
	t=read();
	while(t--){
		a=read();
		x=read(); 
		lsum=(a-1)*a/2;
		write(bs(a,x));
		putchar_unlocked('\n');
	}
} 
