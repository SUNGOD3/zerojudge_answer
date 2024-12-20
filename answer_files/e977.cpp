#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
inline void write(long long int x) {
	if(!x){
		putchar_unlocked('0');
		return;
	}
	long long int stk[15],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	int n;
	char a[31],t;
	n=read();
	for(int c=1;c<=n;++c){
		int al=0;
		while(t=getchar_unlocked()){
			if(t<'A')break;
			a[al]=t;
			++al;
		}
		long long int ans=0;
		for(int i=0;i<al;++i){
			ans<<=2;
			if(a[i]=='C')
				++ans;
			else if(a[i]=='G')
				ans+=2;
			else if(a[i]=='T')
				ans+=3;
		} 
		putchar_unlocked('C');
		putchar_unlocked('a');
		putchar_unlocked('s');
		putchar_unlocked('e');
		putchar_unlocked(' ');	
		write(c);
		putchar_unlocked(':');
		putchar_unlocked(' ');
		putchar_unlocked('('); 
		write(al);
		putchar_unlocked(':'); 
		write(ans);
		putchar_unlocked(')');
		putchar_unlocked('\n');
	}
} 
