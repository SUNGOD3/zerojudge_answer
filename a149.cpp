#include <iostream>

using namespace std;

int main(){
	
	int a=0;
	long long int s=1;
	int popo=0;
	
	cin >> popo;
	
	while(cin >> a){//123  1*2*3
	
	if(a==0){s=0;}
		for(int i=0;a>=1;a/=10){
			s=s*(a%10);
		}
		cout << s <<endl;
		s=1;
		
	}
} 
