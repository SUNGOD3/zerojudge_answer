#include <iostream>
using namespace std;
int main(){
	long n,a;
	cin >> n;
	for(long i=n;i>0;--i){
		cin >> a;
		cout << a*i << ' ';
	}
}
