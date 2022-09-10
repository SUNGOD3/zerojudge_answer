#include <iostream>

using namespace std;

int main(){
	
	int a=0;
	long long int s=1;
	
	while(cin >> a){
		
		for(int i=0;i<a;i++){
			s=s+i;
		}
		cout << s <<endl;
		s=1;
	}
} 
