#include <iostream>
#include <string>

using namespace std;

int main (){
	
	long long int a=0,b=0;
	string l;
	while(cin >> a >> l >> b){
		if(l[0]=='+'){
			cout << a+b << endl;
		}
		else if(l[0]=='-'){
			cout << a-b << endl; 
		}
		else if(l[0]=='*'){
			cout << a*b << endl;
		}
		else if(l[0]=='/'){
			cout << a/b << endl;
		}
	}
	
} 
