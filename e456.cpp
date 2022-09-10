#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(getline(cin,a)){
		string b;
		for(int i=0;i<a.length();i++){
			if(a[i]!=' '){
				b+=a[i];
			}
			else{
				cout << b << " little, ";
				b.clear();
			}
		}
		cout << b << " little Indians\n";
	}
} 
