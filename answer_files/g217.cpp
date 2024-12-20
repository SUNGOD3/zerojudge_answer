#include <iostream>
#include <map>
using namespace std;
int n,ba,k,t;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> n;
		int ma=0;
		map <int,int> mp;
		for(int i=0;i<n;++i){
			cin >> k;
			mp[k]++;
			ma=max(ma,mp[k]);
		}
		if(ma>n/2){
			cout << "No\n";
		}
		else{
			cout << "Yes\n";
		}
	}
} 
