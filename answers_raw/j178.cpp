#include <iostream>
using namespace std;
int m,a,x;
int main(){
	cin >> m >> a;
	for(int i=0;i<m;++i){
		cin >> x;
		if(x>=a){
			cout << a;
			return 0;
		} 
		a+=x;
	}
	cout << a;
	return 0;
} 
