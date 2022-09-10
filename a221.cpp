#include <iostream>
#include <string>
using namespace std;
int main(){
	int a;
	string b,c;
	cin >> a;
	getline(cin,b);
	for(int h=1;h<=a;h++){
		getline(cin,b);
		getline(cin,c);
		cout << "Case " << h << ": ";
		if(b.length()!=c.length()){
			string d,e;
			for(int i=0;i<b.length();i++){
				if(b[i]!=' '){
					d+=b[i];
				}
			}
			for(int i=0;i<c.length();i++){
				if(c[i]!=' '){
					e+=c[i];
				}
			}
			if(d==e){
				cout << "Output Format Error\n";
			}
			else{
				cout << "Wrong Answer\n";
			}
		}
		else{
			if(b==c){
				cout << "Yes\n";
			}
			else{
				cout << "Wrong Answer\n";
			}
		}
	}
} 
