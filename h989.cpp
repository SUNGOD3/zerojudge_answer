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
inline void write(int x) {
	if(x==0)
		putchar_unlocked('0');
	else{
		int stk[9],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
int n,ans,sum;
char x;
int main(){
	n=read();
	for(int i=0;i<n;++i){
		x=read();
		if(x==0){
			ans+=sum/2+sum%2;
			sum=0;
		}
		else{
			++sum;
		}
	}
	write(ans+sum/2+sum%2);
} 
