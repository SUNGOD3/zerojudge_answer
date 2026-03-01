#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
#include <algorithm>
int a[501][501],n,m,q,x,y,v;
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
int main(){
	while(n=read()){
		m=read();
		q=read();
		for(int i=1;i<=n;++i)
			for(int j=1;j<=n;++j)
				if(i==j)
					a[i][j]=0;
				else
					a[i][j]=2147483647;
		while(m--){
			x=read();
			y=read();
			v=read();
			a[x][y]=v;
			a[y][x]=v;
		}
		for(int k=1;k<=n;++k)
			for(int i=1;i<=n;++i)
				for(int j=1;j<=n;++j){
					a[i][j]=std::min(a[i][j],std::max(a[i][k],a[k][j]));
					if(a[1][n]<=q){
						k=n+1;
						i=n+1;
						break;
					}
				}
		if(a[1][n]>q){
			putchar_unlocked('G');
			putchar_unlocked('G');
			putchar_unlocked('\n');
		}
		else{
			putchar_unlocked('S');
			putchar_unlocked('a');
			putchar_unlocked('v');
			putchar_unlocked('e');
			putchar_unlocked('\n');
		}
	}
} 
