#include <iostream>
using namespace std;
int GCD(int m,int n){
	if(m%n==0)
		return n;
	else
		return GCD(n,m%n);
} 
int main(){
	int a,b;
	while(cin >> a >> b){
		if(a>b)
			cout << GCD(a,b) << endl;
		else
			cout << GCD(b,a) << endl;
	}
} 
