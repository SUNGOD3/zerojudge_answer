#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	while(cin >> s){
		if(s=="stop")break;
		bool nb=0;
		for(int i=0;i<s.size();++i){
			if(s[i]<'0'||s[i]>'9'){
				nb=1;
				break;
			}
		}
		if(nb)cout << "print(\"" << s << "\")\n";
		else cout << "print(" << s << ")\n";
	}
}
