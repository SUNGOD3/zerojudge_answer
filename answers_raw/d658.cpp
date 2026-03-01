#include <iostream>

using namespace std;

int main (){
	
	long long int n=1,m=0,i=0,k=1;
	while(cin >> m){
	if(m>=0){
		while(n<m){
			n*=2;
			i++;
		}
		cout << "Case "<< k << ": " <<i-- << endl;
		k++;
		n=1;m=0;i=0;
	}
	}
} 
