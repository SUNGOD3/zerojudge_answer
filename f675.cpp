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
}inline void write(int x) {
	if(x==0)
		putchar_unlocked('0');
	else{
		int stk[9],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
int a[101];
int main(){
	int n=read(),x;
	while(n--){
		x=read();
		a[x]=1;
	}
	x=read();
	for(int i=0;i<101;++i){
		if(a[i]){
			write(i);
			putchar_unlocked('\n');
		} 
	}
	if(a[x]){
		putchar_unlocked('Y');
		putchar_unlocked('e');
		putchar_unlocked('s');
	}
	else{
		putchar_unlocked('N');
		putchar_unlocked('o');
	}
} 
