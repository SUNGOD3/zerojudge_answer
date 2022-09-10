#include <iostream>
using namespace std;
int a[102][102],n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		int ans=0,a2=1000000;
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j){
				cin >> a[i][j];
				a2=min(a[i][j],a2);
				a[i][j]+=a[i][j-1];
			}
		}
		for(int i=1;i<=n;++i){
			for(int j=i;j<=n;++j){
				int buf=0;
				for(int k=1;k<=n;++k){
					if(buf+(a[k][j]-a[k][i-1])>0)
						buf=0;
					else
						buf+=a[k][j]-a[k][i-1];
					ans=min(buf,ans);
				}
			}
		}
		if(a2>=0)
			cout << a2 << "\n";
		else
			cout << ans << "\n";
	}
} 
