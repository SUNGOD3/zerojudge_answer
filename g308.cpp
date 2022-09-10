#include <iostream>
using namespace std;
int n,a[1005][2],ans,it;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> it;
	for(int i=0;i<n;++i){
		cin >> a[i][0];
	}
	for(int i=0;i<n;++i){
		cin >> a[i][1];
	}
	while(a[it][1]!=-1){
		ans+=a[it][1];
		a[it][1]=-1;
		it=a[it][0];
	}
	cout << ans;
} 
