#include <iostream>
using namespace std;
long long t,n,x;
int main(){
	cin.tie(0);cout.tie(0); ios::sync_with_stdio(0);
	cin >> t;
	while(t--){
		cin >> n;
		long long ans=0,tmp=-1e9;
		for(int i=0;i<n;++i){
			cin >> x;
			if(ans%2){
				if(x<tmp){
					tmp=x;
					++ans;
				}
				else{
					tmp=max(x,tmp);
				}
			}
			else{
				if(x>tmp){
					tmp=x;
					++ans;
				}
				else{
					tmp=min(x,tmp);
				}
			}
		}
		cout << ans << "\n";
	}
}
