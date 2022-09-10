#include <iostream>
#include <algorithm>
using namespace std;
int n,ans[105];
pair <int,int> a[105];
int main(){
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a[i].first;
		a[i].second=i;
	} 
	sort(a,a+n);
	for(int i=n-1;i>=0;--i){
		if(a[i].first==a[i+1].first){
			ans[a[i].second]=ans[a[i+1].second];
		}
		else{
			ans[a[i].second]=n-i;
		}
	}
	for(int i=0;i<n;++i){
		cout << ans[i] << " ";
	}
} 
