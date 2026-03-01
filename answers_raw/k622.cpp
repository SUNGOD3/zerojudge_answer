#include <bits/stdc++.h>
using namespace std;
long long a[25][2],n,k,ans;
map <long long,long long> mp;
map <long long,long long> :: iterator it;
int main(){
	cin >> n >> k;
	for(int j=0;j<2;++j)
		for(int i=0;i<n;++i)
			cin >> a[i][j];
	mp[0]=0;
	for(int i=0;i<n;++i){
		map <long long,long long> nxt;
		for(it=mp.begin();it!=mp.end();++it){
			nxt[it->first] = max(it->second,nxt[it->first]);
			if(it->first+a[i][0]<=k){
				nxt[it->first+a[i][0]]=max(nxt[it->first+a[i][0]],it->second+a[i][1]);
			}
		}
		mp=nxt;
	}
	for(it=mp.begin();it!=mp.end();++it){
		ans=max(ans,it->second);
	}
	cout << ans;
}
//9640007
