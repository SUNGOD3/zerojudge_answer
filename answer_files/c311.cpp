#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	while(cin >> a){
		int ans=0,al=a.length();
		for(int i=0;i<al;++i){
			ans*=10;
			ans+=a[i]-'0';
			ans%=91;
		}
		cout << ans << "\n";
	}
} 
