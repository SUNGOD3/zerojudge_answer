#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		long long int m=n/2+1;
		cout << (m+1)*m/2 << "\n";
	}
} 
