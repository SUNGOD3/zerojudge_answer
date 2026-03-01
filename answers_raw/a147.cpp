#include <iostream>

using namespace std;

int main(){
	
	long long int a;
	
	while(cin >> a ){
		if(a>0){
			for(int i=1;i<a;i++){
				if(i%7!=0){
					cout << i << " ";
				}
			}
			cout << endl;
		}
	}
} 
