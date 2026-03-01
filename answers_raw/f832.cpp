#include <iostream>
#include <algorithm>
using namespace std;
int n,m,a[100001],b[100001];
long long int ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n;++i){
		cin >> a[i];
	}
	for(int i=0;i<m;++i){
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	for(int i=n-1,it=m-1;i>=0&&it>=0;--i){
		if(a[i]<=b[it]){
			ans+=a[i];
			--it;
		}
	}
	cout << ans;
}
