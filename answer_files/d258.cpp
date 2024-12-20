#include <iostream>
using namespace std;
int m,n,t;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> n >> m;
		int ans=0;
		while(n>=m){
			if(n%m==0){
				ans+=n/m;
				n=n/m;
			}
			else{
				ans+=n/m;
				n=n/m+n%m;
			}
		}
		if(n==1)
			cout << ans << "\n";
		else
			cout << "cannot do this\n";
	}
}
