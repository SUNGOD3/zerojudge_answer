#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int n,x,y;
vector <int> t[20001];
int ans[20001];
int dfs(int it,int fa){
	if(t[it].size()==0){
		ans[it]=1;
		return 1;
	}
	int tmp=1;
	for(int i=0;i<t[it].size();++i){
		if(t[it][i]!=fa)tmp+=dfs(t[it][i],it);
	}
	ans[it]=tmp;
	return tmp;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=1;i<n;++i){
		cin >> x >> y;
		t[y].push_back(x);
		t[x].push_back(y);
	}
	dfs(1,1);
	for(int i=1;i<=n;++i){
		cout  << setw(5) << right <<  i << '-' << setw(5) << right << ans[i] << "\n";
	}
} 
