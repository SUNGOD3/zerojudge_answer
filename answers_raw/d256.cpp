#include <iostream>
using namespace std;
int main(){
	int t,a,b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		if(b%a)
			cout << "-1\n";
		else
			cout << a << " " << b << "\n"; 
	}
} 
