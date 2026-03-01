#include <iostream>
using namespace std;
int a[11][11],n,m,ans[11][11];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cin >> a[i][j];
			ans[i][j]=a[i][j];
		}
	} 
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			if(a[i][j]==0){
				int t=0,c=0;
				if(a[i+1][j]){
					++t;
					c+=a[i+1][j];
				}
				if(a[i-1][j]){
					++t;
					c+=a[i-1][j];
				}
				if(a[i][j+1]){
					++t;
					c+=a[i][j+1];
				}
				if(a[i][j-1]){
					++t;
					c+=a[i][j-1];
				}
				if(t!=0)ans[i][j]=c/t;
			}
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j)
			cout << ans[i][j] << " ";
		cout << '\n';
	} 
} 
