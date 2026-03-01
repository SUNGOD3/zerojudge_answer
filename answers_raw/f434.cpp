#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int main(){
	char a;
	while(a=getchar_unlocked()){
		if(a==-1)break;
		if(a=='\n'){
			putchar_unlocked('\n');
			continue;
		}
		putchar_unlocked(a-7);
	}
} 
