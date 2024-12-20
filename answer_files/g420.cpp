#include <iostream>
using namespace std;
long long ans,n,m,a[1000005],x;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=1;i<=n;++i){
		cin >> a[i];
	}
	for(int i=1;i<=n&&m>=0;++i){
		++ans;
		m-=a[i];
		if(m<0)break;
		cin >> x; 
		m+=x;
	}
	cout << ans;
} 
