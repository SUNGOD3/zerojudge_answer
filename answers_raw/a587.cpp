#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
//#define getchar_unlocked getchar
//#define putchar_unlocked putchar
int a[101][2];
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
		putchar_unlocked(48);
		putchar_unlocked(10);
		return;
	}
	int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	putchar_unlocked(10);
}
int main(){
	int N,w;
	while(N=read()){
		for(int i(0);i<N;++i){
			a[i][0]=read();
			a[i][1]=read();
		}
		w=read();
		int b[w+1]={0},max(0);
		for(int i(0);i<N;++i)
			for(int j(a[i][0]),jai(0),bjai;j<=w;++j,++jai){
				bjai=b[j]+a[i][1];
				if(b[jai]<bjai){
					b[jai]=bjai;
					(max<b[jai])&&(max=b[jai]);
				}
			}
		write(max);
	}
}
