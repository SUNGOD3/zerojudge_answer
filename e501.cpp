#include <iostream>
#include <map>
using namespace std;
int t,st;
string a,b;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	getline(cin,a);
	getline(cin,a);
	while(t--){
		if(st){
			cout << "\n";
		} 
		st=1;
		map <char,char> mp;
		getline(cin,a);
		getline(cin,b);
		for(int i=0;i<a.length();++i){
			mp[a[i]]=b[i];
		}
		cout << b << "\n" << a << "\n";
		while(getline(cin,a)&&a!=""){
			for(int i=0;i<a.length();++i){
				if(mp.find(a[i])==mp.end()){
					cout << a[i];
				}
				else
					cout << mp[a[i]];			
			}
			cout << "\n";
		}
	}
} 
