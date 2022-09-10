#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int w,n;
	cin >> w >> n;
	int a[n],ans=n;
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	for(int i=0,k=n-1;i<k;--k)
		if(a[i]+a[k]<=w){
			--ans;
			++i;
		}
	cout << ans;
}
