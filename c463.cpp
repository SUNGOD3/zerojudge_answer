#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
struct tree{
	int pa,h=-1;
	bool son;
}fa[100001];
long long int ans;
int root,n,k,t;
inline void dfs(int now,int hi){
	if(fa[now].h>hi)return;
	fa[now].h=hi;
	if(fa[now].pa)
		dfs(fa[now].pa,hi+1);
	else root=now;
	return;
}
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
	n=read();
	for(int i(1);i<=n;++i){
		k=read();
		if(!k)
			fa[i].son=1;
		while(k--){
			t=read();
			fa[t].pa=i;
		}
	}
	for(int i(1);i<=n;++i)
		if(fa[i].son)
			dfs(i,0);
	for(int i(1);i<=n;++i)
		ans+=fa[i].h;
	printf("%d\n%lld\n",root,ans);
}
