#include <iostream>
#include <math.h>

using namespace std;

int main (){
	
	int a=0,b=0,c=0;
	
	while(cin >> a >> b >> c){
		double k=(b*b-4*a*c);
		if (k>0){
			cout << "Two different roots x1=";
			if((-b+sqrt(k))/2*a>(-b-sqrt(k))/2*a) {
				cout << (-b+sqrt(k))/2*a << " , x2=" << (-b-sqrt(k))/(2*a) <<endl;
			}
			else{
				cout << (-b-sqrt(k))/2*a << " , x2=" << (-b+sqrt(k))/(2*a) <<endl;
			}
		}
		else if (k==0){
			cout << "Two same roots x=" << -b/(2*a) <<endl;
		}
		else if (k<0){
			cout << "No real root" <<endl;
		}
	} 
	
}
