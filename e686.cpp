#include <iostream>
#include <algorithm>
using namespace std;
int t,n,rw[30005];
pair <int,pair <int,int> > a[30005];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		cin >> n;
		int DP[30005]={0};
		for(int i=1;i<=n;++i){
			cin >> a[i].second.first >> a[i].first >> a[i].second.second;
			a[i].first+=a[i].second.first;
		}
		sort(a+1,a+n+1);
		for(int i=0;i<=n;++i)rw[i]=a[i].first;
		for(int i=1;i<=n;++i)
			DP[i]=max(DP[i-1],DP[upper_bound(rw,rw+i,a[i].second.first)-rw-1]+a[i].second.second);
		cout << "Case " << ca << ": " << DP[n] << '\n';
	}
} 
