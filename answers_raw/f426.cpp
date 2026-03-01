#include <stdio.h>
using namespace std;
char prime[10001]={1,1};
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
	int n=read(),m=read(),ans=0,ans2=0;
	for(int i=2;i<=100;++i)
		for(int j=i+i;j<10001;j+=i)
			prime[j]=1;
	for(int i=n;i<=m;++i){
		if(!prime[i]){
			ans+=i;
			++ans2;
		} 
	} 
	write(ans2);
	putchar_unlocked('\n');
	write(ans);
}
