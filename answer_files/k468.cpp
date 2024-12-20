#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,s,f,a[3505],ct[10005],ans;
vector <ll> b[10005];
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n >> s >> f;
	for(int i=0;i<n;++i){
		cin >> a[i];
		b[a[i]].push_back(i);
	}
	for(int i=0;i<n;++i){
		if(ct[a[i]]>=b[a[i]].size()||(ct[a[i]]&&b[a[i]][ct[a[i]]-1]>=i))continue;
		ct[a[i]]+=2;
		++ans;
		if(a[i]==f&&ct[a[i]]>=s){
			cout << ans;
			return 0;
		}
	}
} 
