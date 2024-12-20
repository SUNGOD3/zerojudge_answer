#include <bits/stdc++.h>
using namespace std;
int ans;
string s;
int main(){
	cin >> s;
	for(int i=0;i<s.size();++i){
		ans+=s[i]-'A'+1;
	} 
	cout << ans;
} 
