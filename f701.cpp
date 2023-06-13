#include <bits/stdc++.h>
using namespace std;
string a,b;
int main(){
	getline(cin,a);
	getline(cin,b);
	a+=' ';
	for(int i=0;i<a.size();++i){
		string s;
		while(a[i]!=' '){
			s+=a[i];
			++i;
		}
		cout << s;
		if(i!=a.size()-1){
			cout << " " << b << " ";
		}
	} 
} 
