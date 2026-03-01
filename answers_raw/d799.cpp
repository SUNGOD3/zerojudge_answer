#include <bits/stdc++.h>
#define MAXN 500005
#define ll long long
using namespace std;
ll n,m,ci,ci2,ci3,is;
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
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	BIT.init(n+1);
	for(int i=1;i<=n;++i){
		cin >> ci;
		BIT.add(i,ci);
		BIT.add(i+1,-ci);
	}
	cin >> m;
	for(int i=1;i<=m;++i){
		cin >> is >> ci >> ci2;
		if(is==1){
			cin >> ci3;
			BIT.range_add(ci,ci2,ci3);
		}
		else{
			cout << BIT.range_ask(ci,ci2) << "\n";
		}
	}
}
