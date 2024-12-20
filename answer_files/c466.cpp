#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	cin >> a;
	int i;
	for(i=0;a[i]=='-';i++){};
	if(a[i]=='0')
		cout << '0'; 
	else{
		if(i%2)
			cout << '-';
		for(;a[i]!='\0';i++)
			cout << a[i];
	}
} 
