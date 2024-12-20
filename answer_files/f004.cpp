#include <iostream>
using namespace std;
int a[7]={1000,500,100,50,10,5,1};
int main(){
	int n;
	while(cin >> n){
		cout << n << " = ";
		for(int i=0;i<7;++i){
			if(n>=a[i]){
				cout << a[i] << "*" << n/a[i] ; 
				if(n%=a[i])cout << " + ";
			}
		}
		cout << "\n";
	}
}
