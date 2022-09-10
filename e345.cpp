#include <iostream>
using namespace std;
int main(){
	int a,n=0;
	while(cin >> a){
		n=0;
		while(1){
			n+=a%10;
			a/=10;
			if(a==0){
				if(n>=10){
					a=n;
					n=0;
					continue;
				}
				else{
					cout << n << "\n";
					break;
				}
			}
		}
	}
} 
