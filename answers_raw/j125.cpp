#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[100001],ma,ans;
bool has[100001];
vector <pair <ll,ll>> te[100001];//go v
bool ok(ll m){
	if(te[n*n-1][0].second>m&&te[n*n-1][1].second>m)return 0;
	memset(has,0,sizeof(has));
	queue <pair <ll,ll>> q;
	q.push({0,0});
	while(!q.empty()){
		ll tp=q.front().first,dis=q.front().second;
		q.pop();
		if(has[tp])continue;
		has[tp]=1;
		if(tp==n*n-1){
			ans=dis;
			break;
		}
		for(int i=0;i<te[tp].size();++i){
			if(te[tp][i].second>m||has[te[tp][i].first])continue;
			q.push({te[tp][i].first,dis+1});
		}
	}
	if(!has[n*n-1])return 0;
	return 1;
}
ll BS(ll l,ll r){
    for(;l<=r;){
        ll mid=(l+r)/2;
        ok(mid)?r=mid-1:l=mid+1;
    }
    return l;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	if(n==1){
		cout << "0\n0";
		return 0;
	}
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			cin >> a[i*n+j];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			ll v=i*n+j;
			ma=max(ma,a[v]);
			if((v+1)%n)te[v].push_back({v+1,abs(a[v]-a[v+1])});
			if((v-1+n)%n!=n-1)te[v].push_back({v-1,abs(a[v]-a[v-1])});
			if(v+n<n*n)te[v].push_back({v+n,abs(a[v]-a[v+n])});
			if(v-n>=0)te[v].push_back({v-n,abs(a[v]-a[v-n])});
		}
	}
	ll ac=BS(0,ma);
	ok(ac);
	cout << ac << "\n" << ans;
} 
