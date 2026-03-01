#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <memory.h>
#include <algorithm>
using namespace std;
int t,n[31],f[31];
bool check=0;
inline void write(int x) {
	int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
inline void dfs(int pos,int m){
	if(!m){
		check=1;
		for(int i(0);i<t;++i)
			if(f[i]){
				write(n[i]);
				putchar_unlocked(' ');
			}
		putchar_unlocked('\n');
		return ;
	}
	if(pos>=t||n[pos]>m) return;
	f[pos]=1;
	dfs(pos+1,m-n[pos]);
	f[pos]=0;
	dfs(pos+1,m);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int m;
	while(cin>>t>>m){
		for(int i(0);i<t;i++) cin>>n[i];
		sort(n,n+t);
		memset(f,0,sizeof(f));
		dfs(0,m);
		if(!check){
			putchar_unlocked('-');
			putchar_unlocked('1');
			putchar_unlocked('\n');
		}
	}
}
