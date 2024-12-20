#include <iostream>
using namespace std;
int n,x;
int main(){
	cin >> n;
	if(n%2){
		for(int i=0;i<=n/2;++i){
			cin >> x;
		}
		cout << x;
	}
	else{
		for(int i=0;i<n/2;++i){
			cin >> x;
		}
		cin >> n;
		cout << (x+n)/2;
	}
}
