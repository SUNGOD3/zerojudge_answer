#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int ans[26][2],x,y,t,a(0);
char n;
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
	int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	x=read();
	y=read();
	t=read();
	for(int i(0);i<26;++i)
		ans[i][0]=-1;
	for(int i(0),j(0);i<x;++i,j=0){
		for(;j<y;++j){
			n=getchar_unlocked();
			if(n!='0'){
				n-=97;
				ans[n][0]=i;
				ans[n][1]=j;
				++a;
			}
			n=getchar_unlocked();
		}
	}
	if(a<t)
		puts("Mission fail.");
	else{
		for(int i(0);t>0;++i){
			if(ans[i][0]!=-1){
				write(ans[i][0]);
				putchar_unlocked(' ');
				write(ans[i][1]);
				putchar_unlocked('\n');
				--t;
			}
		}
	}
} 
