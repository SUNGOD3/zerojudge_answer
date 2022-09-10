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
int n,x,y,ca;
char g;
int main(){
	while(n=read()){
		int a[n+1],b[n+1];
		for(int i=0;i<n;++i){
			x=getchar_unlocked();
			x=getchar_unlocked();
			y=600+60*(x-48);
			g=getchar_unlocked();
			x=getchar_unlocked();
			y+=(x-48)*10;
			x=getchar_unlocked();
			y+=x-48;
			a[i]=y;
			g=getchar_unlocked();
			x=getchar_unlocked();
			x=getchar_unlocked();
			y=600+60*(x-48);
			g=getchar_unlocked();
			x=getchar_unlocked();
			y+=(x-48)*10;
			x=getchar_unlocked();
			y+=x-48;
			b[i]=y;
			while(x=getchar_unlocked())
				if(x=='\n'||x==-1)break;
		}
		a[n]=1080;
		b[n]=1080;
		int ma=0,it,now=600;
		for(int i=0;i<=n;++i){
			a[i]-=now;
			if(a[i]>ma){
				ma=a[i];
				it=i-1;
			}
			now=b[i];
		}
		if(it==-1)
			now=600;
		else
			now=b[it];
		printf("Day #%d: the longest nap starts at %d:%d%d and will last for ",++ca,now/60,(now%60)/10,(now%60)%10);
		if(ma>=60)
			printf("%d hours and %d minutes.\n",ma/60,ma%60);
		else
			printf("%d minutes.\n",ma%60);
	}
} 
