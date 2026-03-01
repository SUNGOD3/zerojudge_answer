#include <bits/stdc++.h>
#define ll long long
#define mxn 200005
#define MAXN 200005
using namespace std;
ll n,m,is,cx,cy;
struct _BIT{
    ll N;
    ll C[MAXN],C2[MAXN];
    ll lowbit(ll x){return x&(-x);}
    void init(ll n){
        N=n;
        memset(C,0,sizeof(C));
        memset(C2,0,sizeof(C2));
    }
    void add(ll pos,ll val){
        for(ll i=pos;i<=N;i+=lowbit(i)) C[i]+=val,C2[i]+=val*pos;
    }
    void range_add(ll l,ll r,ll x){
        add(l,x);
        add(r+1,-x);
    }
    ll ask(ll pos){
        ll ret=0;
        for(ll i=pos;i>0;i-=lowbit(i)) ret+=(pos+1)*C[i]-C2[i];
        return ret;
    }
    ll range_ask(ll l,ll r){
        return ask(r)-ask(l-1);
    }
}BIT;
int main(){
	cin.tie(0);cout.tie(0); ios::sync_with_stdio(0);
	cin >> n >> m;
	BIT.init(n+1);
	for(ll ca=1;ca<=m;++ca){
		cin >> is;
		if(is==1){
			cin >> cx;
			BIT.add(cx,1);
			BIT.add(cx+1,-1);
		}
		else{
			cin >> cx >> cy;
			cout << BIT.range_ask(cx,cy)%2 << "\n";
		}
	} 
	return 0;
}
