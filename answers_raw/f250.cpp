#include <iostream>
#include <algorithm>
using namespace std;
long long int ans[11001],it,t,n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(long long int i=1;i<1000000000000000000;i*=2){
		for(long long int j=1;i*j<1000000000000000000;j*=3){
			for(long long int k=1;i*j*k<1000000000000000000;k*=5){
				ans[it]=i*j*k;
				++it;
			}
		}
	}
	sort(ans,ans+it);
	cin >> t;
	while(t--){
		cin >> n;
		cout << ans[n-1] << '\n';
	}
} 
