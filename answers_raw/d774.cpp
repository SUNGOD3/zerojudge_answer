#include <iostream>
#include <algorithm>
using namespace std;
int n,m,mi,it;
pair <int,int> a[5005],b[5005];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	m=m*1.5;
	for(int i=1;i<=n;++i){
		cin >> a[i].second >> a[i].first;
		a[i].second*=-1;
	}
	sort(a+1,a+n+1);
	mi=a[n-m+1].first;
	for(int i=n;i>=n-m;){
		while(a[i].first>=mi){
			b[it]=a[i];
			++it;
			--i;
		}
		if(a[i].first<mi)break;
	}
	cout << mi << " " << it << "\n";
	for(int i=0;i<it;++i){
		cout << -b[i].second << " " << b[i].first << "\n";
	} 
}
