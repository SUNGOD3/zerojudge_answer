#include <bits/stdc++.h>
using namespace std;
int n,a[200005],ans,x,y;
map <int,int> mp;
vector <int> e[200005];
void dfs(int x){
	mp[a[x]]++;
	ans=max(ans,mp[a[x]]);
	for(int i=0;i<e[x].size();++i){
		dfs(e[x][i]);
	}
	mp[a[x]]--;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a[i];
	}
	for(int i=0;i<n-1;++i){
		cin >> x >> y;
		e[x].push_back(y);
	}
	dfs(0);
	cout << ans;
}
