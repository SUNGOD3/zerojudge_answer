#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main (){
	long long int a,b=0;
	long long int x,y=0;	
	long long int sum=0;
	bool n=false;

	while(cin >> a >> b){

		while(a<=b){
		x=a;
		while(x>0){
			x/=10;
			y++;
		}
		x=a;
		while(x>0){
			sum+=pow(x%10,y);
			x/=10;
		}
		if(a==sum){
		cout << sum << " " ;
		n=true;
		}
		
		sum=0;
		y=0;
		a++;
		
		}
		if(n==false){
			cout << "none" << endl; 
		}
		else if(n==true){
			cout << endl; 
		}
		n=false;
		
	}
	
	
} 
