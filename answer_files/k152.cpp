#include <iostream>
using namespace std;
string a,b;
int main(){
	cin >> a >> b;
	cout << "|" << a;
	for(int i=0;i+a.size()<10;++i){
		cout << " ";
	}
	cout << "|";
	for(int i=0;i+b.size()<10;++i){
		cout << " ";
	}
	cout << b << "|";
}
