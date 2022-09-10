#include <iostream>

using namespace std;

int main(){
	
	long long int a;
	long long int b;
	long long int i;
	
	while(cin >> a >> b){//30//24
		
		if(a>b){
			i=a;
			while(i>0){
				a%=b;
				i=a;
				if(i==0){
					cout << b << endl;
					break;
				}
				if(i>0){
				b%=a;
				i=b;
					if(i==0){
						cout << a << endl;
						break;
					}
				}
			}
		}
		if(b>a){
			i=b;
			while(i>0){
				b%=a;
				i=b;
				if(i==0){
					cout << a << endl;
					break;
				}
				if(i>0){
				a%=b;
				i=a;
					if(i==0){
						cout << b << endl;
						break;
					}
				}
			}
		}
		if(a==b){
			cout << a;
		}
	}
}
	
