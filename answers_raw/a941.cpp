#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
#include <math.h>
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
		long long int stk[40],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
} 
int main(){
	long long int t=read(),r;
	while(t--){
		r=read();
		long long int a[30001]={0},x,ans=0,total=0;
		for(int i=0;i<r;++i){
			x=read();
			++a[x];
		}
		r+=r%2;
		r/=2;
		x=0;
		while(1){
			x+=a[ans];
			if(x>=r)break;
			++ans;
		}
		for(int i=0;i<=30000;++i)
			if(a[i])total+=labs((ans-i)*a[i]);
		write(total);
		putchar_unlocked(' ');
		write(ans);
		putchar_unlocked('\n');
	}
} 
