#include <bits/stdc++.h>
using namespace std;
int n,m,l,ans,t,x,y;
vector <int> e[10005];
bool has[10005];
void dfs(int x){
	if(has[x])return;
	has[x]=1;
	++ans;
	for(int i=0;i<e[x].size();++i){
		dfs(e[x][i]);
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		cin >> n >> m >> l;
		ans=0;
		memset(e,0,sizeof(e));
		memset(has,0,sizeof(has));
		for(int i=0;i<m;++i){
			cin >> x >> y;
			e[x].push_back(y);
		}
		for(int i=0;i<l;++i){
			cin >> x;
			dfs(x);
		}
		cout << ans << "\n";
	}
}
