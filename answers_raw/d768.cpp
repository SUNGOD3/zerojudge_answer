#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int a[201][201],n,m,b[201];
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
inline void draw(int it){
	if(b[it]==1){
		for(int i=0;i<n;++i){
			if(a[i][it]&&b[i]==0){
				b[i]=2;
				draw(i);
			}
		}
	}
	else{
		for(int i=0;i<n;++i){
			if(a[i][it]&&b[i]==0){
				b[i]=1;
				draw(i);
			}
		}
	}
}
inline int chat(int it){
	int color=b[it];
	if(color==0)return 1;
	for(int i=0;i<n;++i){
		if(a[i][it]&&b[i]==color&&i!=it){
			return 1;
		}
	}
	return 0; 
}
int main(){
	while(n=read()){
		m=read();
		for(int i=0;i<n;++i){
			b[i]=0;
			for(int j=0;j<n;++j){
				a[i][j]=0;
			}
		}
		int x,y,ans=1;
		while(m--){
			x=read();
			y=read();
			a[x][y]=1;
			a[y][x]=1;
		}
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				if(a[i][j]){
					b[i]=1;
					draw(i);
					i=n;
					j=n;
				}
			}
		}
		for(int i=0;i<n;++i){
			if(chat(i)){
				ans=0;
			}
		}
		if(ans||n<=2){
			puts("BICOLORABLE.");
		}
		else{
			puts("NOT BICOLORABLE.");
		}
	}
} 
