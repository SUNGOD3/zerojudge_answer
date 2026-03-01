#include <iostream>
#include <algorithm>
using namespace std;
int n,m,a[105],ans[105];
void dfs(int it,int k){
	if(k==m){
		for(int j=0;j<m;++j){
			cout << ans[j] << " ";
		}
		cout << "\n";
		return;
	}
	else if(n-it<m-k){
		return;
	}
	int la=-1;
	for(int j=it;j<n;++j){
		if(a[j]!=la){
			ans[k]=a[j];
			dfs(j+1,k+1);
			la=a[j];
		}
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cout.tie(0);
	while(cin >> n >> m){
		if(n==0&&m==0)break;
		for(int i=0;i<n;++i){
			cin >> a[i];
		}
		sort(a,a+n);
		dfs(0,0);
	}
} 
