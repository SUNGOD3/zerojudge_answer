#include <iostream>
#include <string>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	cin >> a;
	int b,al=a.length();
	bool c[al];
	for(int i=0;i<al;i++)
		c[i]=0;
	cin >> b;
	char d;
	while(b--){
		for(int i=0;i<al;i++)
			if(c[i])
				cout << a[i];
			else
				cout << "*";
		cout << "\n";
		cin >> d;
		for(int i=0;i<al;i++)
			if(d==a[i])
				c[i]=1;
	}
	for(int i=0;i<al;i++)
			if(c[i])
				cout << a[i];
			else
				cout << "*";
} 
