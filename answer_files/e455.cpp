#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
inline void write(int x) {
	if(x==0)putchar_unlocked('0');
	int stk[5],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
char a,a0;
int main(){
	while(a0=getchar_unlocked()){
		if(a0==EOF)break;
		int ans(0);
		for(int i(1),k(16384);i<16;++i,k>>=1){
			a=getchar_unlocked();
			if(a=='1')ans+=k;
		}
		if(a0=='1')ans=32768-ans;
		write(ans);
		putchar_unlocked('\n');
		a0=getchar_unlocked();
	}
}
