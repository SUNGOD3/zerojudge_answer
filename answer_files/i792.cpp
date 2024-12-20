#include <bits/stdc++.h>
using namespace std;
long n,k,a[100005],ans,s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	for(int i=n-1;i>=0;--i){
		cin >> k;
		ans+=s*a[i];
		s+=k;
	}
	cout << ans;
}
