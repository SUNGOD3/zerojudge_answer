#include <iostream>
#include <climits>
using namespace std;
int n,m,ans,k;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		if(n==0)break;
		ans=0;
		m=INT_MAX;
		for(int i=0;i<n;++i){
			cin >> k;
			if(m<k){
				ans+=k-m;
			}
			m=k;
		}
		cout << ans << "\n";	
	}
} 
