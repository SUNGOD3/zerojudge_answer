#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	cout << "�Q���i���ܪk  �۹������Q�i���ܪk\n" ;
	while(cin >> a){
		int n=0;
		if(a[0]>='0'&&a[0]<='9')
			n+=a[0]-48;
		else
			n+=a[0]-55;
		n*=16;
		if(a[1]>='0'&&a[1]<='9')
			n+=a[1]-48;
		else
			n+=a[1]-55;	
		cout << "      " << a << "                 " << n << endl;
	}
} 
