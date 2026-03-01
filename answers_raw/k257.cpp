#include <iostream>
using namespace std;
string a;
int main(){
	cin >> a;
	if(a.size()==2){
		cout << a[0] << "00" << a[1];
	}
	else if(a.size()==3){
		cout << a[0] << "0" << a[1] << a[2];
	}
	else{
		cout << a;
	}
}
