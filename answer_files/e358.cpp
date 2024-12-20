#include <iostream>
#define mod 1000000007
using namespace std;
long long bc[105],n,a[100005];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		long long ans=0,k=1;
		for(int i=0;i<=50;++i){
			bc[i]=0;
		}
		for(int i=0;i<n;++i){
			cin >> a[i];
			int it=0;
			while(a[i]){
				if(a[i]%2){
					bc[it]=1;
				}
				++it;
				a[i]/=2;
			}
		}
		for(int i=0;i<50;++i){
			bc[i]*=(n-1);
		}
		for(int i=1;i<n;++i,k*=2){
			k%=mod;
		}
		for(int i=0,j=1;i<50;++i,j*=2){
			j%=mod;
			if(bc[i]){
				ans+=(j*k)%mod;
				ans%=mod;
			}
		}
		cout << ans << "\n"; 
	}
}
