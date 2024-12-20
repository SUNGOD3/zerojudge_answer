#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int a;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> s >> a;
	for(int i=0;i<s.size();++i){
		cout << s[i];
		if(i==a)cout << '.';
	}
} 
