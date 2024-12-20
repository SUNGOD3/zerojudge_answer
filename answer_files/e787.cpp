#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
char a[101][101],b[101][101],c[101][101],x,y,i,j;
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
	x=read();
	y=read();
	for(i=0;i<x;++i){
		for(j=0;j<y;++j){
			while(b[i][j]<47)
				b[i][j]=getchar_unlocked();
			b[i][j]&=1;
		}
	}
	for(i=0;i<x;++i){
		for(j=0;j<y;++j){
			while(a[i][j]<47)
				a[i][j]=getchar_unlocked();
			a[i][j]&=1;
		}
	}
	for(i=0;i<x;++i){
		for(j=0;j<y;++j){
			for(int ii=0;ii<x;++ii)
				c[i][j]+=a[ii][j];
			for(int jj=0;jj<y;++jj)
				c[i][j]+=a[i][jj];
			c[i][j]-=a[i][j];
		}
	}
	for(i=0;i<x;++i){
		for(j=0;j<y;++j){
			(c[i][j]&1)?putchar_unlocked(!b[i][j]+'0'):putchar_unlocked(b[i][j]+'0');
			putchar_unlocked(' ');
		}
		printf("\n");
	}
} 
