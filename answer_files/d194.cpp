#include <iostream>
#include <map>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int t,n,x;
	cin >> t;
	while(t--){
		cin >> n;
		int ans=0,mi=0;
		map <int,int> mp;
		for(int i=1;i<=n;++i){
			cin >> x;
			mi=max(mi,mp[x]);
			mp[x]=i;
			ans=max(i-mi,ans);
		}
		cout << ans << "\n";
	}
}
