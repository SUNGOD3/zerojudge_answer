#include <iostream>
using namespace std;
int main(){
	int k,n;
	while(cin >> k >> n){
		int it=0,ans=0;
		bool a[11]={0};
		while(n){
			a[it]=n%2;
			n/=2;
			++it;
		} 
		for(int i=0,kk=1;i<it;++i,kk*=k)
			ans+=a[i]*kk;
		cout << ans << "\n"; 
	}
} 
