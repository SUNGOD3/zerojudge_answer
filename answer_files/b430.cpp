#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
inline long long int mod(long long int a,long long int b,long long int c){
	long long int tmp=0;
	for(;b;b>>=1,a<<=1,a=(a>=c)?a-c:a){
		if(b&1){
			tmp+=a;
			if(tmp>=c)
				tmp-=c;
		}
	}
	return tmp;
}
inline void write(long long int x) {
	if(x==0)putchar_unlocked('0');
	long long int stk[20],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
inline long long int read(){
	long long int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
int main(){
	long long int a,b,c;
	while(a=read(),b=read(),c=read()){
		write(mod(a%c,b%c,c));
		putchar_unlocked('\n');
	}
} 
