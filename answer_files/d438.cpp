#include <stdio.h>
int p[1000001]={1,1},ans[1000001];
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
inline bool dig(int v){
	if(p[v])return 0;
	int tmp=0;
	while(v){
		tmp+=v%10;
		v/=10;
	}
	if(p[tmp])return 0;
	return 1;
}
int main(){
	for(int i=2;i<=1000;++i)
		for(int j=i+i;j<=1000000;j+=i)
			p[j]=1;
	for(int i=1;i<=1000000;++i){
		if(dig(i))
			ans[i]++;
		ans[i]+=ans[i-1];
	}
	int n,x,y;
	n=read();
	while(n--){
		x=read();
		y=read();
		write(ans[y]-ans[x-1]);
		putchar_unlocked('\n');
	}
} 
