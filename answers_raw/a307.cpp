#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(cin >> a){
		if(a[0]=='-'){
			string b;
			for(int i=a.length()-1;i>0;i--)
				b+=a[i];
			int i;
			for(i=0;b[i]=='0';i++){};
			cout << "-";
			for(;i<b.length();i++)
				cout << b[i];
			cout << "\n";
		}
		else{
			string b;
			for(int i=a.length()-1;i>=0;i--)
				b+=a[i];
			int i;
			for(i=0;b[i]=='0';i++){};
			for(;i<b.length();i++)
				cout << b[i];
			cout << "\n";
		}
	}
} 
