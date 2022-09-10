#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int a[16],n;
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
inline void pf(int l){
	putchar_unlocked('{');
	for(int i=0;i<l;++i){
		write(a[i]);
		if(i!=l-1)putchar_unlocked(',');
	}
	putchar_unlocked('}');
	putchar_unlocked('\n');
}
inline void dfs(int it,int l){
	if(it==l){
		pf(l);
		return ;
	}
	for(int i=(it==0)?1:a[it-1]+1;i<=n;++i){
		a[it]=i;
		dfs(it+1,l);
	}
}

int main(){
	int t=read();
	while(t--){
		n=read();
		putchar_unlocked('{');
		putchar_unlocked('0');
		putchar_unlocked('}');
		putchar_unlocked('\n');
		for(int i=1;i<=n;++i)
			dfs(0,i);
		putchar_unlocked('\n');
	}
} 
