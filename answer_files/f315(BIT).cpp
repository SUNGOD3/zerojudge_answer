#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
#define lowbit(x) (x & -x)
#define ll long long
using namespace std;
int n,nn;
vector<int> bit(200001), l(100001), r(100001);
inline ll int read(){
	ll int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
inline ll sum(ll int x){
	ll ret=0;
	for(;x;x-=lowbit(x))
		ret+=bit[x];
	return ret;
}
inline void upd(int x,int v){
	for(;x<=nn;x+=lowbit(x))
		bit[x]+=v;
}
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
 	ll ans = 0;
	n=read();
	nn=2*n;
	for(int i=1,t;i<=nn;++i){
		t=read();
		if (!l[t])l[t]=i;
		else r[t]=i;
	}
	for(int i=1;i<=n;++i){
		ans += sum(r[i]) - sum(l[i]);
		upd(l[i],1), upd(r[i],1);
	}
	cout << ans ;
}
