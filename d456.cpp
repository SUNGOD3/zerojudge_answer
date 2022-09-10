#include <iostream>
using namespace std;
int t;
string s,b;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	getline(cin,s);
	while(t--){
		getline(cin,s);
		getline(cin,b);
		string r;
		int sl=s.length(),mi=sl,ma=-sl;
		for(int i=0;i<sl;++i){
			int c=0;
			if(s[i]==b[0]){
				mi=min(-i,mi);
			}
			else if(s[i]==b[1]){
				ma=max(i,ma);
			}
		}
		for(int i=min(abs(mi),abs(ma))+1;i<max(abs(mi),abs(ma));++i){
			r+=s[i];
			s[i]=-1;
		}
		for(int i=0;i<sl;++i){	
			if(s[i]!=-1)cout << s[i]; 
		}
		cout << "\n" << r << "\n";
	}
} 
