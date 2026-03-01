#include <iostream>
using namespace std;
int main(){
	cin.tie(0); cout.tie(0);ios::sync_with_stdio(false);
	string s;
	while(cin >> s){
		long x=0;
		for(int i=0;i<s.size();++i){
			x*=2;
			x+=s[i]-'0';
		}
		long y=x;
		while(x>>=1){
			y^=x;
		}
		cout << y << "\n";
	}
} 
