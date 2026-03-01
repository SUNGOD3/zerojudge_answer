#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
char ans[1100001];
inline void write(int x) {
	int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	for(int i=0;i<1000000;++i){
		int a=i,b=i;
		while(a){
			b+=a%10;
			a/=10;
		}
		ans[b]=1;
	}
	for(int i=0;i<=1000000;++i)
		if(ans[i]==0){
			write(i);
			putchar_unlocked('\n');
		}
} 
