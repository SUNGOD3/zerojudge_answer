#define max( x, y )  ( ((x)>(y)) ? (x):(y) )
#include <stdio.h>
int m,n,a[10001],b[10001],c[10001],ans[10001],score=-1000000,tmp;
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
int main(){
	m=read();
	n=read();
	while(m--){
		for(int i=0;i<=n;++i){
			a[i]=read();
			b[i]=0;
			c[i]=0;
		}
		b[0]=ans[0]+a[0];
		for(int i=1;i<n;++i)
			b[i]=max(ans[i]+a[i],b[i-1]+a[i]);
		c[n-1]=ans[n-1]+a[n-1];
		for(int i=n-2;i>=0;--i)
			c[i]=max(ans[i]+a[i],c[i+1]+a[i]);
		for(int i=0;i<n;++i)
			ans[i]=max(b[i],c[i]);
	}
	for(int i=0;i<n;++i)
		score=max(score,ans[i]);
	printf("%d",score);
}
