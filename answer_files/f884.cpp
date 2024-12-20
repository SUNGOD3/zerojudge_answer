#include <iostream>
using namespace std;
//2^64 18446744073709551616
//2^63 9223372036854775808
unsigned long long int n,ans;
__int128 bs(__int128 l,__int128 r){
	if(l>r)return r;
	__int128 m=(l+r)/2,v=m*m*m*m;
	if(v>n)
		return bs(l,m-1);
	else
		return bs(m+1,r);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		ans=bs(1,65536);
		cout << ans-1 << " " << ans << " " << ans+1 << " " << ans+2 << "\n";
	}
}
