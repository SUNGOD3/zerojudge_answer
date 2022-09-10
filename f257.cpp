#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
char a[101][101];
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
	if(x==0){putchar_unlocked('0');return;}
	int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	int n,t,x,y;
	while(n=read()){
		t=read();
		for(int i=0;i<101;++i)
			for(int j=0;j<101;++j)
				a[i][j]=0;
		while(t--){
			y=read();
			x=read();
			a[x][y]=-1;
		}
		for(int ii=0;ii<n;++ii)
			for(int jj=0;jj<n;++jj)
				if(a[ii][jj]!=-1)
					for(int i=-1;i<=1;++i)
						for(int j=-1;j<=1;++j)
							if(ii+i>=0&&jj+j>=0&&a[ii+i][jj+j]==-1)
								++a[ii][jj];
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				if(a[i][j]==-1)
					putchar_unlocked('x');
				else
					write(a[i][j]);
			}
			putchar_unlocked('\n');
		}
	}
} 
