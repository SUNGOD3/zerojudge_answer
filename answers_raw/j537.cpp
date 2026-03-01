#include <iostream>
#include <algorithm>
using namespace std;
int n,m,ans;
pair <int,int> a[355];
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	for(int i=0;i<n;++i)
		cin >> a[i].first >> a[i].second;
	cin >> m;
	sort(a,a+n);
	for(int i=n-1;i>=0;--i){
		if(m>=a[i].second){
			m-=a[i].second;
			++ans;
		}
		else{
			if(m)++ans;
			break;
		}
	}
	cout << ans;
}
