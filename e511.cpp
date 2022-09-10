#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
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
	if(x==0){
		putchar_unlocked('0');
		return;
	}
	int stk[5],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
} 
int main(){
	int n,tmp,t=read();
	while(t--){
		n=read();
		int a=0,b=100;
		if(n==1){
			tmp=read();
			putchar_unlocked('0');
		}
		else{
			while(n--){
				tmp=read();
				(tmp>a)?a=tmp:0;
				(tmp<b)?b=tmp:0;
			}
			write((a-b)*2);
		}
		putchar_unlocked('\n');
	}
} 
