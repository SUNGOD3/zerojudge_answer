#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
long long int a[101][101],n,t;
char c;
inline long long int read(){
	long long int a(0),f(1);
	char c('0');
	while(c>='0'||c=='-'){
		if(c=='-'){
			f=-1;
			c=getchar_unlocked();
		}
		a=a*10+c-'0';
		c=getchar_unlocked();
	}
	return a*f;
}
inline void write(int x) {
	int stk[4],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	t=read();
	for(int ca=1;ca<=t;++ca){
		c=getchar_unlocked();
		c=getchar_unlocked();
		c=getchar_unlocked();
		c=getchar_unlocked();
		n=read();
		char ans=1;
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j){
				a[i][j]=read();
				if(a[i][j]<0)ans=0;
			}
		int nn=n/2+n%2;
		for(int i=0;i<nn&&ans;++i)
			for(int j=0;j<n&&ans;++j)
				if(a[i][j]!=a[n-i-1][n-j-1])
					ans=0;
		putchar_unlocked('T');
		putchar_unlocked('e');
		putchar_unlocked('s');
		putchar_unlocked('t');
		putchar_unlocked(' ');
		putchar_unlocked('#');
		write(ca);
		putchar_unlocked(':');
		putchar_unlocked(' ');
		if(ans)
			puts("Symmetric.");
		else
			puts("Non-symmetric.");
	}
} 
