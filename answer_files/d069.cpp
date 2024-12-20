#include <iostream>

using namespace std;

int main (){
	
	int n=0,year=0;
	bool a=false;
	while(cin >> n){
		for(int i=0;i<n;i++){
			cin >> year;
			if(year%4==0){
				a=true;
			}
			if(year%100==0){
				a=false;
			}
			if(year%400==0){
				a=true;
			}
			if(a==true){
				cout << "a leap year" << endl;
			}
			if(a==false){
				cout << "a normal year" << endl;
			}
			a=false;
			
		}
	}
	
	
} 
