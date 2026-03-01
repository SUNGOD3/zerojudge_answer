#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,k;
	while(cin >> n >> k){
		int ans=0;
		for(int i=2;i<=n;++i)
			ans=(ans+k)%i;
		cout << ans+1 << "\n";
	}
} 
