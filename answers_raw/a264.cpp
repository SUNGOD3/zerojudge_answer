#include <iostream>
using namespace std;
int n;
int main(){
	while(cin >> n){
		if(n<21){
			cout << "-1\n";
		}
		else if(n==21){
			cout << "1\n";
		}
		else if(n<30){
			cout << "-1\n";
		}
		else if(n<=40){
			cout << "2\n";
		}
		else{
			int rm=(n-42)%14;
			if(rm<2||rm>12){
				cout << "-1\n";
			}
			else{
				cout << (n-42)/14+3 << "\n";
			}
		}
	}
} 
