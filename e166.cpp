#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
inline int max(const int &x,const int &y) { return (((y-x)>>(32-1))&(x^y))^y; }
inline int read(){
	int a(0),f(1);
	char c('0');
	while(c>='0'||c=='-'){
		if(c=='-'){
			f=-1;
			c=getchar_unlocked();
		}
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a*f;
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
	int n;
	while(n=read()){
		int a[n+n+1]={0},ma=-10000,s=0,tmp;
		for(int i=0;i<n;++i){
			a[i]=read();
			a[n+i]=a[i];
			if(a[i]<0)s=1;
		}
		if(s){
			for(int i=0,in=n;i<n;++i,++in){
				if(a[i]<0){
					tmp=0;
					for(int j=i;j<in;++j){
						tmp=max(a[j],tmp+a[j]);
						ma=max(tmp,ma);
					}
				}
			}
		}	
		else{
			ma=0;
			for(int i=0;i<n;++i)
				ma+=a[i];
		}
		if(ma<0){
			ma*=-1;
			putchar_unlocked('-');
		}
		write(ma);
		putchar_unlocked('\n');
	}
}
