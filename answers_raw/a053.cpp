#include <iostream>

using namespace std;

int main(){
	
	int A;
	
	while(cin >> A){
		
		if(A<=10){
			cout << A*6 <<endl;
		}
		else if(10<A&&A<=20){
			cout << 60+(A-10)*2 <<endl;
		}
		else if(20<A&&A<=40){
			cout << 80+(A-20) <<endl;
		}
		else{
			cout << "100" <<endl;
		}
	}
} 
