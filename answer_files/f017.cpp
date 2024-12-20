#include <iostream>
using namespace std;
int main(){
	string a,c;
	cin >> a;
	for(int i=0;i<a.length();++i){
		c+=a[i];
		if(i<a.length()-1){
			c+='-';
		}
	}
	cout << c;
} 
