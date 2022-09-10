#include <iostream>
using namespace std;
int main(){
	int a;
	while(cin >> a){
		if(a==0)
			break;
		while(a>9){
			int b=0;
			while(a!=0){
				b+=a%10;
				a/=10;
			}
			a=b;
		}
		cout << a << "\n";
	}
} 
