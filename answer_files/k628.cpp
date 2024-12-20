#include <bits/stdc++.h>
using namespace std;
int n;
string s,a={'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	getline(cin,s);
	for(int ca=1;ca<=n;++ca){
		getline(cin,s);
		cout << "Case #" << ca << ": " << s << " is ruled by ";
		bool ia=0;
		if(s[s.size()-1]=='y'||s[s.size()-1]=='Y'){
			cout << "nobody.\n";
			continue;
		}
		for(int i=0;i<a.size();++i){
			if(s[s.size()-1]==a[i]){
				ia=1;
			}
		}
		if(ia){
			cout << "Alice.\n";
		}
		else{
			cout << "Bob.\n";
		}
	}
}
