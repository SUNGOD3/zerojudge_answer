#include <iostream>

using namespace std;

int main(){
	long long int a=0,sum=0,number1=0,number2=0;
	
	cout << "PERFECTION OUTPUT" << endl;
	while(cin >> a){
		if(a>0){
			for(int i=1;i<=a/2;i++){
				if(a%i==0){
					sum+=i;
				}
			}
			number1=a;
			while(number1>0){
				number2++;
				number1/=10;
			}
			while(number2-5<0){
				cout << " ";
				number2++;
			}
			number2=0;
			if(sum>a){
				cout << a <<"  ABUNDANT" << endl;
			}
			else if(sum==a){
				cout << a << "  PERFECT" << endl;
			}
			else if(sum<a){
				cout << a <<"  DEFICIENT"<< endl;
			}
		sum=0;	
		}
		else{
			cout << "END OF OUTPUT" << endl; 
		}
	}
	
	
} 
