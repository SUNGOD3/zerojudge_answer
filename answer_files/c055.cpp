#include <iostream>
#include <iomanip>
using namespace std;
int a[10001]={0,1};
int main(){
	int n;
	for(int i=2;i<10001;i++){
		a[i]=a[i-1]*i;
		while(a[i]%10==0){
			a[i]/=10;
		}
		a[i]%=100000;
	}
	while(cin >> n){
		cout << setw(5) << n << " -> " << a[n]%10 << "\n";
	} 
}
