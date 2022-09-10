#include <iostream>
#include <algorithm>
using namespace std;
int t,m,n;
pair <int,int> a[100005];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> n >> m;
		long long ans=0;
		for(int i=1;i<=m;++i){
			cin >> a[i].first;
		}
		for(int i=1;i<=m;++i){
			cin >> a[i].second;
		}
		a[0].second=a[0].first=0;
		sort(a+1,a+m+1);
		for(int i=m;i>0;--i){
			if(a[i].second){
				if(a[i].second%2){
					a[i].second++;
					a[i-1].second--;	
				}
				ans+=(a[i].second/2)*a[i].first*2;
				a[i].second=0;
			}
		} 
		cout << ans << '\n';
	}
}
