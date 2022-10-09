#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	int t,n,a[1001],ans,i;
	for(cin >> t;t--;cout << ans << "\n"){
		cin >> n;
		for(i=0,ans=0;i<n;++i){
			cin >> a[i];
			for(int j=0;j<i;++j)
				if(a[j]<=a[i])++ans;
		}
	}
} 
