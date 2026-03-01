#include <iostream>
#include <set>
using namespace std;
string s;
set <string> st;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> s;
	for(int i=0;i<s.length();++i){
		string tmp;
		for(int j=i;j<s.length();++j){
			tmp+=s[j];
			st.insert(tmp);
		}
	}
	for(auto i:st){
		cout << i << "\n";
	}
} 
