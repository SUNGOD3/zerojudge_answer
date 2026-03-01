#include <iostream>
using namespace std;
int t,a[3];
string s;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		for(int i=0;i<3;++i)
			cin >> a[i];
		cin >> s;
		for(int i=0;i<s.size();++i){
			if(s[i]=='M')--a[0];
			else if(s[i]=='Y')--a[1];
			else if(s[i]=='C')--a[2];
			else if(s[i]=='R')--a[0],--a[1];
			else if(s[i]=='V')--a[0],--a[2];
			else if(s[i]=='G')--a[1],--a[2];
			else if(s[i]=='B')--a[0],--a[1],--a[2];
		}
		bool ac=1;
		for(int i=0;i<3;++i)
			if(a[i]<0)ac=0;
		cout << (ac?"YES":"NO");
		for(int i=0;i<3;++i)
			if(ac)cout << " " << a[i];
		cout << "\n";
	} 
} 
