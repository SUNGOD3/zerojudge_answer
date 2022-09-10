#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int main(){
	int a,s=0;
	char b;
	scanf("%d",&a);
	b=getchar_unlocked();
	++a;
	while(b=getchar_unlocked()){
		if(b==-1)break;
		if(!s)putchar_unlocked(b);
		if(++s==a)s=0;
	}
} 
