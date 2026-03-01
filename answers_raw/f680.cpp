#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
char a[11][11],n,ans,t;
inline void write(int x) {
	if(x==0)
		putchar_unlocked('0');
	else{
		int stk[2],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
inline void dfs(int x,int y,int c){
	if(x<0||y<0||x>=n||y>=n||a[x][y]!=c)return;
	a[x][y]=0;
	dfs(x-1,y,c);
	dfs(x+1,y,c);
	dfs(x,y+1,c);
	dfs(x,y-1,c);
}
int main(){
	n=getchar_unlocked()-48;
	t=getchar_unlocked();
	if(t=='0'){
		n=10;
		getchar_unlocked();
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			a[i][j]=getchar_unlocked()-48;
			getchar_unlocked();
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(a[i][j]){
				++ans;
				dfs(i,j,a[i][j]);
			}
		} 
	}
	write(ans);
} 
