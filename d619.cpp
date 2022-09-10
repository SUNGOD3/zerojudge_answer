#include <iostream>
using namespace std;
long long n,ans,ba;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		ans=(n+1)/2;
		for(ba=4;ba<=200000000;ba+=ba){
			ans+=n/ba*(ba/2)+max(n%ba+1-ba/2,(long long)0);
		}
		cout << ans%1000000000 << "\n";
	}
}
