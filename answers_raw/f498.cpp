#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define swap(x,y) { x = x + y; y = x - y; x = x - y; }
#include <stdio.h>
int a[1025],b[1025],n;
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
	while(n=read()){
		for(int i=1,tmp=1;i<=n;++i,tmp=i){
			a[i]=read();
			b[i]=a[i];
			while(tmp>>1){
				if(a[tmp]>a[tmp>>1])
					swap(a[tmp],a[tmp>>1]);
				if(b[tmp]<b[tmp/2])
					swap(b[tmp],b[tmp>>1]);
				tmp>>=1;
			}
		}
		for(int j=1;j<=n;++j){
			write(b[j]);
			putchar_unlocked(' ');
		}
		putchar_unlocked('\n');
		for(int j=1;j<=n;++j){
			write(a[j]);
			putchar_unlocked(' ');
		}
		putchar_unlocked('\n');
	}
} 
