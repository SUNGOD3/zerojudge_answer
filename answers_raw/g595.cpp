#include <iostream>
using namespace std;
int a[205],n,ans;
int main(){
	cin >> n;
	for(int i=1;i<=n;++i){
		cin >> a[i];
	}
	a[0]=a[2];
	a[n+1]=a[n-1];
	for(int i=1;i<=n;++i){
		if(a[i]==0){
			ans+=min(a[i-1],a[i+1])-a[i];
			a[i]=min(a[i-1],a[i+1]);
		}
	}
	cout << ans;
} 
