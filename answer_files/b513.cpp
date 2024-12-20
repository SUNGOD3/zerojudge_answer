#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a=0;
	long long int b=0;
	bool ans=true;
	while(cin >> a){
		for(int i=1;i<=a;i++){
			cin >> b;
			for(int j=2;j<=sqrt(b);j++){
				if(b%j==0){
					cout << "N" << endl;
					ans=false;
					break;
				}
			}
			if(ans==true){
				cout << "Y" << endl;
			}
			ans=true;
		}
	}
} 
