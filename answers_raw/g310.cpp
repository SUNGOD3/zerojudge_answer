#include <iostream>
using namespace std;
long long n,a[1000001],k,ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a[i];
	}
	for(int i=0;i<n;++i){
		cin >> k;
		if(k>a[ans])++ans;
	}
	cout << ans;
} 
