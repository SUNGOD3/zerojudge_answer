#include <iostream>

using namespace std;

int main (){
	
	int y=0;
	while(cin >> y){
		if(y%4==0&&y%100!=0){
			cout << "a leap year" <<endl;
		}
		else if(y%400==0){
			cout << "a leap year" <<endl;
		}
		else{
			cout << "a normal year" <<endl;
		}
	}
	
	
}
