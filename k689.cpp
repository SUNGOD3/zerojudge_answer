#include <iostream>
using namespace std;
long long n,a,b,c;
int main(){
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a >> b >> c;
		cout << a+b*c << "\n";
	}
} 
