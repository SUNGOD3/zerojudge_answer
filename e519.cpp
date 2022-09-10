#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	long long int a;
	while(cin >> a){
		if(a==0)break;
		long long int b=a*10/9;
		if(a%9==0)
			cout << b-1 << " " << b << "\n";
		else
			cout << b << "\n";
	}
} 
