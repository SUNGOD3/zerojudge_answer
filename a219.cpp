#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
#include <algorithm>
int n,k;
bool an[16][16];
char a[16];
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
	while(n=read()){
		for(int i=0;i<=n;++i)
			for(int j=0;j<=n;++j)
				an[i][j]=0;
		for(int i=0;i<n;++i){
			a[i]='A'+i;
			while(k=read()){
				if(k==0)break;
				an[i][k-1]=1;
			}
		}
		int it=0;
		char tmp[16]="",chache=' ';
		do{
			if(a[it]==chache)continue;
			int s=1;
			for(int i=0;i<n&&s;++i)
				if(an[a[i]-'A'][i]){
					s=0;
					it=i;
					chache=a[i];
				}
			if(s){
				for(int i=0;i<n;++i){
					if(a[i]!=tmp[i])putchar_unlocked(a[i]);
					tmp[i]=a[i];
				}
				putchar_unlocked('\n');
			}
		}while(std::next_permutation(a,a+n));
	}
} 
