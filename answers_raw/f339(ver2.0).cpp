#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define max( x, y )  ( ((x)>(y)) ? (x):(y) )
#include <stdio.h>
int a[100001];
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
		int stk[7],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
int main(){
	int n,m,x,y,s=0,k;
	n=read();
	m=read();
	for(int i=0;i<=n;++i)
		a[i]=i;
	while(m--){
		x=read();
		y=read();
		a[x]=max(a[x],y);
	}
	for(int i=0,l;i<=n;++i){
		if(a[i]!=i){
			l=a[i];
			for(int j=i+1;j<=l;++j)
				if(a[j]>l)
					l=a[j];
			a[i]=l;
			i=l-1;
		}
	}
	while(s<n){
		while(s<a[s])
			s=a[s];
		k=s;
		while(k==a[k]&&k<n)++k;
		if(k!=s&&k<=n){
			write(s);
			putchar_unlocked(' ');
			write(k);
			putchar_unlocked('\n');
			s=k-1;
		}
		++s;
	}
}
