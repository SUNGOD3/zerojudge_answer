#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define max( x, y )  ( ((x)>(y)) ? (x):(y) )
#include <stdio.h>
int n,m,dp[101][101],ans;
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
	int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	while(n=read()){
		m=read();
		if(n==0&&m==0)break; 
		for(int i=0;i<101;++i)
			for(int j=0;j<101;++j){
				dp[i][j]=0;
				a[i][j]=0;
			}
		ans=0;
		for(int i=0;i<n;++i)
			for(int j=0;j<m;++j){
				a[i][j]=read();
				a[i][j]=!a[i][j];
			}
		for(int i=0;i<n;++i)
			for(int j=0;j<m;++j)
				if(a[i][j])
					for(int jj=j;jj>=0;--jj){
						if(a[i][jj])
							++dp[i][j];
						else
							break;
					}
		for(int i=0;i<n;++i)
			for(int j=0;j<m;++j)
				if(a[i][j])
					if(dp[i][j]*(n-i)>ans)
						for(int k=1;k<=dp[i][j];++k){
							int tmp=0;
							for(int ii=i;ii<=n;++ii){
								if(dp[ii][j]>=k)
									tmp+=k;
								else{
									ans=max(tmp,ans);
									break;
								}
							}
						}
		write(ans);
		putchar_unlocked('\n');
	}
}
