#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	int t,n,x,ans,ma;
	for(cin >> t;t--;cout << ans << "\n"){
		ans=-1e9,ma=-1e9;
		for(cin >> n;n--;){
			cin >> x;
			ans=max(ma-x,ans);
			ma=max(ma,x);
		}
	}
} 
