#include <iostream>
using namespace std;
int main(){
	int a;
	while(cin >> a){
		if(a<0)break;
		long long int b=0,c=1,c2=1;
		while(a--){
			c=b+c2+1;
			b=c2;
			c2=c;
		}
		cout << b << " " << c << "\n";
	} 
} 
