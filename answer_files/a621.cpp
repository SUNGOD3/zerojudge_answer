#include <iostream>

using namespace std;

int main(){
	
	
	long long int a=0,b=0,c=1;
	while(cin >> a){
		while(a>=b){
			cout << "2^" << b << " = " <<  c << endl;
			c*=2;
			b++;
		}
	}
} 
