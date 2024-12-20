#include <iostream>
#include <algorithm>
using namespace std;
long long n,m,ans;
pair <long long,long long> a[4005];
bool cmp(pair <long long,long long> x,pair <long long,long long> y){
	long long c=x.second-x.first,d=y.second-y.first;
	if(c<d)return 1;
	return 0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n+m;++i){
		cin >> a[i].first >> a[i].second; 
		ans+=a[i].first;
	}
	sort(a,a+n+m,cmp);
	for(int i=0;i<m;++i){
		ans-=(a[i].first-a[i].second);
	}
	cout << ans;
} 
