#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(getline(cin,a)){
		string b;
		int al=a.length();
		for(int i=0;i<al;i++){
			if(a[i]==' '){
				for(int j=b.length()-1;j>=0;j--)
					cout << b[j];
				b.clear();
				cout << ' ';
			}
			else
				b+=a[i];
		}
		for(int j=b.length()-1;j>=0;j--)
			cout << b[j];
		cout << "\n";
	}
} 
