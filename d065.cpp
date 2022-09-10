#include <iostream>

using namespace std;

int main (){
	int a;
	int b;
	int c;
	while(cin >> a >> b >> c){
		if(a>=b&&a>=c){
			cout << a << endl;
		}
		else if(b>=a&&b>=c){
			cout << b << endl;
		}
		else{
			cout << c << endl;
		}
	}
	a=0;
	b=0;
	c=0;
} 
