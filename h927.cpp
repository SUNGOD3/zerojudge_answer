#include <iostream>
using namespace std;
long n,m,ans,mod=998244353,ba=1;
string a,b;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m >> a >> b;
	for(int i=0;i<n;++i){
		ans=(ans*2)%mod;
		ba=(ba*2)%mod;
		if(a[i]=='1')ans+=1;
	}
	for(int i=0;i<m;++i){
		(b[i]=='1')?ans+=ba:ans<<=1;
		ans%=mod;
		ba=(ba*2)%mod;
	}
	cout << ans;
} 
