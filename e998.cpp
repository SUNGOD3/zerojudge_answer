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
	int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	int n=read(),c,i,j;
	do{
		for(i=0,c=0;i<n;++i){
			if(i&1){
				c+=n;
				j=n;
				while(j--){
					write(c--);
					putchar_unlocked(' ');
				}
				c+=n;
			}
			else{
				j=n;
				while(j--){
					write(++c);
					putchar_unlocked(' ');
				}
			}
			putchar_unlocked('\n');	
		}
		putchar_unlocked('\n');
	}while(n=read());
} 
