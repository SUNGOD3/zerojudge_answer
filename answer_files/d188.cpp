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
	if(x==0)
		putchar_unlocked('0');
	else{
		int stk[4],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
struct solution {
	bool have = 0;
	int a, b, c;
} ans[50001];
int dd[225];
int main(){
	for(int i=0;i<225;++i)
		dd[i]=i*i;
	int sums,times,n;
	for (int i = 0; i <= 130; ++i){
		for (int j = i; j <= 159; ++j){
			int ij=dd[i]+dd[j];
			for (int k = j; k <= 224; ++k) {
				sums = ij + dd[k];
				if (sums > 50000)
					break;
				if (!ans[sums].have)
					ans[sums].have = 1, ans[sums].a = i, ans[sums].b = j, ans[sums].c = k;
			}
		}
	}
	times=read();
	while (times--) {
		n=read();
		if (ans[n].have){
			write(ans[n].a);
			putchar_unlocked(' ');
			write(ans[n].b);
			putchar_unlocked(' ');
			write(ans[n].c);
			putchar_unlocked('\n');	
		}
		else{
			putchar_unlocked('-');
			putchar_unlocked('1');
			putchar_unlocked('\n');
		}
	}
}
