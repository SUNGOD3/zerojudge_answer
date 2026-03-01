#include <iostream>
using namespace std;
int n,a[1005],s;
void dfs(int it){
	if(it<0||it>=n||a[it]==0)return;
	int t=a[it];
	a[it]=0;
	if(t==2){
		dfs(it+1);
		dfs(it-1);
	}
	else if(t>2){
		dfs(it+2*t);
		dfs(it-2*t);
		dfs(it+t);
		dfs(it-t);
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a[i];
	}
	cin >> s;
	dfs(s);
	for(int i=0;i<n;++i){
		cout << a[i] << " ";
	}
}
