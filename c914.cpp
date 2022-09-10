#include <iostream>
using namespace std;
long long int a[31]={1,2},b[31]={1,2},n,t;
int main(){
	for(int i=2;i<31;++i){
		b[i]=a[i-1]*2+b[i-1];
		a[i]=a[i-1]*2+a[i-2]+b[i-1];
	}
	cin >> t;
	while(t--){
		cin >> n;
		cout << a[n] << '\n';
	}
} 
