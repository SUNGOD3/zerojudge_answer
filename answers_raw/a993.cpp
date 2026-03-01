#include <iostream>
using namespace std;
int main(){
	int a,c;
	while(cin >> a){
		long long int b=1;
		c=1;
		while(b%a!=0){
			c++;
			b=b*10+1;
			b=b%a;
		}
		cout << c << "\n";
	}
} 
