#include <iostream>
#include <algorithm>
using namespace std;
long long n,k,b[105],ans;
pair <long long,long long> a[100005];
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n >> k;
	for(int i=0;i<k;++i)b[i]=-1;
	for(int i=0;i<n;++i)
		cin >> a[i].second;
	for(int i=0;i<n;++i)
		cin >> a[i].first;
	sort(a,a+n);
	for(int i=0;i<n;++i){
		int ma=-2,it;
		for(int j=0;j<k;++j){
			if(b[j]<a[i].second&&b[j]>ma){
				ma=b[j];
				it=j;
			}
		}
		if(ma!=-2){
			++ans;
			b[it]=a[i].first;
		}
	}
	cout << ans;
} 
