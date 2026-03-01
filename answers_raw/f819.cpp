#include <iostream>
#include <algorithm>
using namespace std;
int ans,n,m,d,a[2001],it;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> m >> d;
		if(d>100){
			ans+=(d-100)*5;
			a[it++]=m;
		}
	}
	sort(a,a+it);
	for(int i=0;i<it;++i){
		cout << a[i] << " ";
		if(i==it-1)cout << "\n";
	}
	cout << ans;
} 
