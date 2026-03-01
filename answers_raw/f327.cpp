#include <iostream>
using namespace std;
int main(){
	string a,b;
	int aa=0,bb=0;
	cin >> a >> b;
	for(int i=0;i<a.length();++i){
		aa*=26;
		aa+=a[i]-'A'+1;
	} 
	for(int i=0;i<b.length();++i){
		bb*=26;
		bb+=b[i]-'A'+1;
	} 
	//cout << aa << " " << bb << "\n";
	cout << bb-aa+1;
} 
