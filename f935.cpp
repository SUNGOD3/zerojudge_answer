#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int n,ma=-1000000,mi=1000000,ans,l=-1,r=-1,tl=-1;
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
int main(){
	while(n=read()){
		if(mi>n)mi=l=n;
		if(ans<n-mi)ans=n-mi,r=n,tl=l;
	}
	write(ans);
	if(ans){
		putchar_unlocked(' ');
		write(tl);
		putchar_unlocked(' ');
		write(r);
	}
	else{
		puts(" -1 -1");
	}
}
