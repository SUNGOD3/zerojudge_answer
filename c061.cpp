#include <iostream>
using namespace std;
long long int n,m;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n >> m){
		if(n==0&&m==0)break;
		long long int nm=n-m,ans=1;
		if(nm<m){
			long long int tmp=nm;
			nm=m;
			m=tmp;
		}
		for(long long int i=nm+1;i<=n;++i){
			ans*=i;
			while(m>1&&ans%m==0){
				ans/=m;
				--m;
			}
		}
		cout << ans << "\n";
	}
} 
