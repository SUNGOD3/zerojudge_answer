#include <iostream>
#include <algorithm>
using namespace std;
long long a[1000005],n,m,k,ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n;++i){
		cin >> a[i];
	}
	sort(a,a+n);
	for(int i=0;i<m;++i){
		cin >> k;
		ans+=*lower_bound(a,a+n,k);
	}
	cout << ans;
}
