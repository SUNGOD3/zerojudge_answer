#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int g,c,all,ans;
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
int main(){
	while(g=read(),c=read()){
		all+=g*c;
		ans+=c;
	}
	all/=ans;
	if(all>=60)
		printf("Oh wow! You pass it!\n%d",all);
	else
		printf("YEEEEEE!!!");
} 
