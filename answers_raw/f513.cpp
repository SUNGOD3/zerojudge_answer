#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int m,n,a[101][101],ans;
inline int judge(int i,int j,int v){
	if(i<0||j<0||i>=m||j>=n||a[i][j]!=v)return 1;
	return 0;
}
inline int check(int i,int j){
	for(int ii=-1;ii<=1;++ii)
		for(int jj=-1;jj<=1;++jj)
			if(judge(i+ii,j+jj,a[i][j])==0&&(ii!=0||jj!=0))
				return 0;
	return 1;
}
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
		int stk[9],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
} 
int main(){
	m=read();
	n=read();
	for(int i=0;i<m;++i)
		for(int j=0;j<n;++j)
			a[i][j]=read();
	for(int i=0;i<m;++i)
		for(int j=0;j<n;++j)
			if(check(i,j))
				++ans;
	write(ans);
} 
