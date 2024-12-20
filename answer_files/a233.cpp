#include <iostream>
#include <algorithm> 

using namespace std;

int main(){

	long long int a=0;
	while(cin >> a){
		long long int b[a];
		for(long long int i=0;i<a;i++){
			cin >> b[i];
		}
		sort(b,b+a);
		for(long long int i=0;i<a;i++){
			cout << b[i] << " ";
		}
		cout << endl; 
	}
	
} 
