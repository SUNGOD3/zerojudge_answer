#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
#include <math.h>
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
	int n,a;
	while(n=read()){
		int tmp=0;
		long long int ans=0;
		while(n--){
			a=read();
			tmp+=a;
			ans+=abs(tmp);
		}
		write(ans);
		putchar_unlocked('\n');
	}
} 
