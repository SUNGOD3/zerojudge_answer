#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,k;
	while(cin >> n >> k){
		if(n==0)cout << "0\n";
		else{
			long long int a[n]={0},ans=0;
			for(int i=0;i<n;++i)
				cin >> a[i];
			sort(a,a+n);
			for(int i=0;i<n&&k;++i){
				if(a[i]<0){
					--k;
					a[i]*=-1;
				}
				else
					break;
			}
			if(k%2){
				long long int ma=10000000,mit=-1;
				for(int i=0;i<n&&ma;++i){
					if(a[i]<ma){
						ma=a[i];
						mit=i;
					}
				}
				a[mit]*=-1;
			}
			for(int i=0;i<n;++i)
				ans+=a[i];
			cout << ans << "\n";
		}
	}
} 
