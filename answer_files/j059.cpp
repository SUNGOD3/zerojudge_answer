#include <iostream>
using namespace std;
long long t,n;
int main(){
	cin >> t;
	while(t--){
		cin >> n;
		cout << abs(((n*567/9+7492)*235/47-498)%100/10)<< "\n";
	}
}
