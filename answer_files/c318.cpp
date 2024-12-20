#include <iostream>
using namespace std;
int main(){
	int n,t,ans=0;
	cin >> n >> t;
	int a[n][2],mn;
	for(int i=0;i<n;++i)
		cin >> a[i][0] >> a[i][1];
	while(t--){
		mn=0;
		for(int i=0;i<n;++i)
			mn=max(a[i][0],mn);
		for(int i=0;i<n;++i){
			if(a[i][0]==mn){
				ans+=a[i][0];
				a[i][0]-=a[i][1];
				a[i][0]=max(0,a[i][0]);
				break;
			}
		}
	}
	cout << ans;
} 
