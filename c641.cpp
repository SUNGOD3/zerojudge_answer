#include <iostream>
using namespace std;
long long int a[3],b[3];
int main(){
	while(cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2]){
		long long int t=a[0];
		a[0]+=b[0];
		while(a[0]<max(a[1],a[2]))
			a[0]+=t;
		while(a[0]%a[1]!=b[1]||a[0]%a[2]!=b[2])
			a[0]+=t;
		cout << a[0] << '\n';
	}
} 
