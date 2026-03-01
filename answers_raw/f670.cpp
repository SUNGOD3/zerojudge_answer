#include <stdio.h>
char a[11][11],n,m,x,y,ans;
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
inline void write(int x) {
	if(x==0)
		putchar_unlocked('0');
	else{
		int stk[3],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
inline void dfs(char xx,char yy){
	a[xx][yy]=0;
	for(int i=1;i<=n;++i){
		if(a[xx][i])
			dfs(xx,i);
		if(a[i][yy])
			dfs(i,yy);
	}
}
int main(){
	n=read();
	m=read();
	for(int i=1;i<=n;++i)
		a[i][i]=1;
	while(m--){
		x=read();
		y=read();
		a[x][y]=1;
		a[y][x]=1;
	}
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
			if(a[i][j]){
				dfs(i,j);
				++ans;
			}
	write(ans);
} 
