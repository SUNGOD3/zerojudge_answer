#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	long long int a,b=0;
	bool d=true;
	while(cin >> a){
		for(int i=2;i<=sqrt(a);i++){
			if(a%i==0){
				b=a/i;
				for(int j=2;j<=sqrt(b);j++){
					if(b%j==0){
						d=false;
						break;
					}
				}
				if(d==true){
					cout << b << endl;
				}
				d=true;
			}
		}
	}
} 
