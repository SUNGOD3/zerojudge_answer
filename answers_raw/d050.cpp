#include <iostream>

using namespace std;

int main (){
	int a=0;
	while(cin >> a){
		if(a-15<0){
			a+=24;
		}
		cout << a-15 << endl;
	}
	
} 
