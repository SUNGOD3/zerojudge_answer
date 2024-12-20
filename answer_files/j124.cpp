#include <iostream>
using namespace std;
long long a[1000005],n,ct,ans;
void dfs(int p){
	if(a[ct]==0)return;
	if(p!=-1)ans+=abs(a[ct]-a[p]);
	p=ct;
	for(int i=0,n=2+a[ct]%2;i<n;++i){
		++ct;
		dfs(p);
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	while(cin >> a[n++]);
	dfs(-1);
	cout << ans;
} 
