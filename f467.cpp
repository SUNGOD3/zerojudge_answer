#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
long long int n,t;
inline long long int read(){
	long long int a(0),f(1);
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
		int stk[21],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
inline long long int fd(long long int l,long long int r){
	long long int m=(l+r)/2;
	if(l>r)return m;
	long long int v=(m+1)*m/2;
	if(v>n)
		return fd(l,m-1);
	else
		return fd(m+1,r);
}
int main(){
	t=read();
	while(t--){
		n=read();
		if(n<0)n*=-1;
		if(n==0){
			putchar_unlocked('3');
			putchar_unlocked('\n');
		}
		else{
			long long int s=fd(0,n),sv=(s+1)*s/2;
			if(sv==n){
				write(s);
				putchar_unlocked('\n');
			}
			else{
				++s;
				sv+=s;
				while((sv-n)%2){
					++s;
					sv+=s;
				}
				write(s);
				putchar_unlocked('\n');
			}
		}
	}
} 
