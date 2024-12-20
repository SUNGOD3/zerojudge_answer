#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,q,l,h;
	cin >> n >> q;
	int a[n];
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	while(q--){
		cin >> l >> h;
		int ans=upper_bound(a,a+n,h)-lower_bound(a,a+n,l);
		(ans==0)?cout << "The candies are too short\n":cout << ans << "\n";
	}
} 
