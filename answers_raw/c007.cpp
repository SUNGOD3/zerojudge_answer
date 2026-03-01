#include <iostream>
#include <string>

using namespace std;

int main(){
	string a;
	bool b=true; 
	while(getline(cin,a)){
		for(int i=0;i<a.length();i++){
			if(a[i]==34&&b==true){
				cout << "``";
				b=false;
			}
			else if(a[i]==34&&b==false){
				cout << "''";
				b=true;
			}
			else{
				cout << a[i];
			}
		}
		cout << endl;
	}
} 
