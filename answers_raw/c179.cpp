#include <stdio.h>
int n,p[200005],k,ma,total;
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
		int stk[10],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
inline bool judge(int v){
	if(v<ma)return 0;
	int tk=k,tv=v;
	for(int i=0;i<n;++i){
		if(tv<p[i]){
			tv=v;
			--tk;
			if(tk<=0)return 0;
		}
		tv-=p[i];
	}
	return 1;
}
inline int bs(int l,int r){
	if(l>r)return l;
	int m=(l+r)/2;
	if(judge(m))
		return bs(l,m-1);
	else
		return bs(m+1,r);
}
int main() {
	n=read();
	k=read();
	for(int i=0;i<n;++i){
		p[i]=read();
		if(p[i]>ma)ma=p[i];
		total+=p[i];
	}
	if(n==k)
		write(ma);
	else
		write(bs(ma-1,total+1));
	return 0;
}
