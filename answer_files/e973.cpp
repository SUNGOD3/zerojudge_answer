#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int b[10],mx,i;
char a;
int main(){
	while(a=getchar_unlocked()){
		if(a==-1)break;
		++b[a-48];
	}
	do{
		for(i=9,mx=0;i>=0;--i)
			b[i]>mx&&(mx=b[i]);
		if(!mx)break;
		for(;i<10;++i){
			if(b[i]==mx){
				putchar_unlocked(i+48);
				putchar_unlocked(' ');
				b[i]=0;
				break;
			}
		}
	}while(1);
} 
