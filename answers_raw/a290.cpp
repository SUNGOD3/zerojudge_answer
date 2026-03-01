#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> v;
vector<bool> vis;
void dfs(int from){
	vis[from]=1;
	for(auto i:v[from])
		if(!vis[i]) dfs(i);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,m,a,b;
	while(cin >> n >> m){
		v.resize(n+1);
		vis.assign(n+1, false);
		while(m--){
			cin >> a >> b;
			v[a].push_back(b);
		}
		cin >> a >> b;
		dfs(a);
		(vis[b]==0)?cout << "No!!!\n":cout << "Yes!!!\n";
		v.clear();
		vis.clear();
	}
}
