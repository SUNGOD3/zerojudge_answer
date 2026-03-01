#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string s;
	while(cin >> s){
		int tmp=0;
		for(int i=0;i<s.length();++i){
			tmp*=10;
			tmp+=s[i]-'0';
			tmp%=81;
		}
		if(tmp){
			cout << "konosuba!\n";
		}
		else{
			cout << "konopad!\n";
		}
	}
} 
