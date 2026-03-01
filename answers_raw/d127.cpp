#include <iostream>

using namespace std;

int main(){
	long long int a=0;
	while(cin >> a){
		long long int b=a/2;
		if(b%2==1){
			cout << (b/2)*(b/2+1) << endl;
		}
		else{
			cout << (b/2)*(b/2) << endl; 
		}
	}
} 
