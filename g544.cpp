#include <iostream>
using namespace std;
long long n,m,a[1000010][2],ans,k,la;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int t=0;t<2;++t){
		for(int i=0;i<n;++i){
			cin >> a[i][t];
		}
	}
	for(int i=0;i<n;++i){
		if(a[i][1]!=la){
			ans+=k;
			k=a[i][0];
		}
		else{
			k=max(k,a[i][0]);
		}
		la=a[i][1];
	}
	cout << ans+k;
} 
