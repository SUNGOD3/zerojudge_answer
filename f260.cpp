#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int a[100000];
inline int fd(int x){
	if(a[x]==x)return x;
	return a[x]=fd(a[x]);
} 
inline void un(int x,int y){
	a[fd(a[x])]=fd(a[y]);
}
inline void write(int x) {
	int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
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
int main(){
	int n,k;
	while(n=read()){
		k=read();
		int x,y,ans=n;
		for(int i=0;i<n;++i)a[i]=i;
		while(k--){
			x=read();
			y=read();
			if(fd(x)!=fd(y)){ 
				un(x,y);
				--ans;
			}
		}
		write(ans);
		putchar_unlocked('\n');
	}
} 
