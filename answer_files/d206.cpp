#include <iostream>
using namespace std;
int a[101][101],n,t[102][102];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				cin >> a[i][j];
				t[i][j+1]=a[i][j]+t[i][j];
			}
		}
		int ans=0;
		for(int k=0;k<=n;++k){
			for(int j=k+1;j<=n;++j){
				int tmp=0;
				for(int i=0;i<n;++i){
					tmp=max(t[i][j]-t[i][k],t[i][j]-t[i][k]+tmp);
					ans=max(tmp,ans);
				}
			}
		}
		cout << ans << "\n";
	}
} 
