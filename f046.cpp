#include <iostream>
using namespace std;
int w,n;
string s;
int main(){
	cin >> w;
	getline(cin,s);
	getline(cin,s);
	for(int i=0;i<w;++i){
		s=' '+s+' ';
	}
	
	cin >> n;
	for(int i=0,it=n;i<w;++i,++it){
		cout << s[it];
	}
}
