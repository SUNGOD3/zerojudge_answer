#include <iostream>
#include <vector>
using namespace std;
int n,x,y,rt[100005],has[100005],ma;
vector <int> E[100005]; 
void dfs(int it,int stp){
	if(has[it])return;
	ma=max(ma,stp);
	has[it]=1;
	rt[stp]=it;
	for(int i=0;i<E[it].size();++i){
		dfs(E[it][i],stp+1);
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		ma=0;
		for(int i=0;i<n;++i){
			has[i]=0;
			E[i].clear();
		}
		for(int i=0;i<n-1;++i){
			cin >> x >> y;
			E[x].push_back(y);
			E[y].push_back(x);
		}
		dfs(0,0);
		for(int i=0;i<n;++i){
			has[i]=0;
		}
		dfs(rt[ma],0);
		cout << ma << "\n";
	}
} 
