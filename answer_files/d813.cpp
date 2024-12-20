#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int n,m,a[50001],x,y,ca,ans;
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
inline int fd(int xx){
	if(xx==a[xx])return xx;
	else return a[xx]=fd(a[xx]);
}
inline void un(int xx,int yy){
	a[fd(yy)]=fd(xx);
}
int main(){
	while(1){
		n=read();
		m=read(); 
		if(!n)break;
		putchar_unlocked('C');
		putchar_unlocked('a');
		putchar_unlocked('s');
		putchar_unlocked('e');
		putchar_unlocked(' ');
		write(++ca);
		putchar_unlocked(':');
		putchar_unlocked(' ');
		ans=0;
		for(int i=1;i<=n;++i)a[i]=i;
		while(m--){
			x=read();
			y=read();
			un(x,y);
		}
		for(int i=1;i<=n;++i)
			if(fd(a[i])==i)++ans;
		write(ans);
		putchar_unlocked('\n');
	}
} 
