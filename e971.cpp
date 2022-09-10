#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int x,y,i,j,jj;
char a[101][101],b,c='0';
int main(){
	scanf("%d%d",&x,&y);
	for(;i<x;++i)
		for(j=0;j<y;++j)
			while(b=getchar_unlocked())
				if(b=='0'||b=='1'){
					a[i][j]=b;
					break;
				}
	for(i=0;i<x;++i)
		for(j=0;j<y;++j)
			if(a[i][j]=='1')
				for(jj=j+1;jj<y;++jj)
					if(a[i][jj]=='1'){
						for(;j<jj;++j)
							a[i][j]='1';
						break;
					}
	for(i=0;i<x;++i){
		for(j=0;j<y;++j){
			putchar_unlocked(a[i][j]);
			putchar_unlocked(' ');
		}
		putchar_unlocked('\n');
	}
}
