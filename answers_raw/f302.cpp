#include <iostream>
using namespace std;
int c[9]={1,2,3,4,5,6,7,8,9};
string n;
int main(){
	while(cin >> n){
		int ans=0;
		for(int i=0;i<n.length();++i){
			ans*=9;
			ans+=c[n[i]-'1'];
		}
		cout << ans << '\n';
	}
} 
