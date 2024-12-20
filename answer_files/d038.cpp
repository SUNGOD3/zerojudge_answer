#include <iostream>

using namespace std;

int main (){
	
	
	int n=0;
	long long int m=1,w=2,e=0;
	while(cin >> n){
		
		if(n==1){
			e=1;
		}
		else if(n==2){
			e=2;
		}
		while(n>2){
			e=m+w;
			m=w;
			w=e;
			n--;
		}
	if(e>0){
		cout << e << endl;
	}
	m=1;w=2;e=0;
	}
	
} 
