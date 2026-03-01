#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int al=0;
char a[1001];
int main(){
	while(a[al]=getchar_unlocked()){
		if(a[al]==-1)break;++al;
	}	
	for(int ans=0;;++ans){
		for(int i=0;i<al;++i){
			if((a[i]=='l'||a[i]=='L')&&a[i+1]=='o'&&a[i+2]=='v'&&a[i+3]=='e'){
				if(ans<10)putchar_unlocked('0'+ans);
				else{
					putchar_unlocked('0'+ans/10);
					putchar_unlocked('0'+ans%10);
				}
				return 0;
			}
			++a[i];
			(a[i]>'z'||(a[i]>'Z'&&a[i]<'a'))?a[i]-=26:0;
		}
	}
}
