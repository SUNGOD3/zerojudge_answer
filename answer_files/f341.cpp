#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
char a[51],f[51],al,fl,fd=-1;
int main(){
	while(a[al]=getchar_unlocked()){
		if(a[al]<'a')break;++al;
	}
	while(f[fl]=getchar_unlocked()){
		if(f[fl]<'a')break;++fl;
	}
	for(char i=0;i<al&&fd==-1;++i){
		if(a[i]==f[0]){
			char c=0;
			for(char j=i,cn=0;cn<fl;++cn,++j){
				if(a[j]!=f[cn]){
					c=1;
					break;
				}
			}
			if(!c){
				fd=i;
				break;
			}
		}
	}
	fd+=fl-1;
	for(char i=al-1;i>=0;--i){
		if(i==fd){
			i-=fl;
			char j=0;
			while(j<fl){
				putchar_unlocked(f[j]);
				++j;
			}
		}
		putchar_unlocked(a[i]);
	}
} 
