#include <iostream>
#define ll long long
const ll P = 75577,MOD = 998244353;
using namespace std;
ll n,m,Hash[100001],PH[100001]={1},mv;
string x,y;
int main(){
	cin.tie(0);cout.tie(0); ios::sync_with_stdio(0);
	for(int i=1;i<=100000;++i)
		PH[i]=PH[i-1]*P%MOD;
	while(cin >> n >> m >> x >> y){
		ll mal = 0;
		bool ans=0;
		for(ll i=0;i<m;++i)
			mal = (mal * P + y[i]) % MOD;
		for(ll i=1,val=0,mv = PH[m];i<=n;++i){
			val = (val * P + x[i-1]) % MOD;
			Hash[i] = val;
			if(i>=m&&(val-(Hash[i-m]*mv)%MOD+MOD)%MOD==mal){
				ans=1;
				cout << "Yes\npos: " << i-m << "\n";
				break;
			}
		}
		if(ans==0)
			cout << "No\n";
	}
}
