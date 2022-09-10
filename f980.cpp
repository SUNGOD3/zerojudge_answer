#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string n;
	long long p;
	while(cin >> n >> p){
		long long ans=0;
		for(long long i=0;i<n.size();++i){
			ans*=10;
			ans+=n[i]-'0';
			if(ans>=p)break;
		}
		if(ans>=p){
			cout << "0\n";
		}
		else{
			for(long long i=ans-1;i>1;--i){
				ans*=i;
				ans%=p;
			}
			cout << ans << "\n";
		}
	}
} 
