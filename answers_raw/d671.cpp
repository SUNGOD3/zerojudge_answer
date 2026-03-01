#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
	int a;
	cin >> a;
	string b;
	getline(cin,b);
	while(a--){
		getline(cin,b);
		float k=sqrt(b.length());
		int bb=b.length();
		if(k==sqrt(bb)){
			int g=k;
			for(int i=0;i<g;i++){
				for(int j=0;j<g;j++){
					cout << b[(i%g)+j*g];
				}
			}
		}
		else{
			cout << "INVALID";
		}
		cout << "\n";
	}
} 
