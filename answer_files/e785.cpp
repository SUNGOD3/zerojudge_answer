#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	string s,y;
	map <string,string> mp;
	cin >> n;
	getline(cin,s);
	while(n--){
		getline(cin,s);
		getline(cin,y);
		mp[s]=y;
	}
	cin >> n;
	getline(cin,s);
	while(n--){
		getline(cin,s);
		cout << mp[s] << "\n"; 
	}
} 
