#include <iostream>
#include <string>
using namespace std;
int main(){
	long long int a;
	while(cin >> a){
		string b;
		if(a==0)
			b='0';
		if(a<0)
			break;	
		while(a>0){
			b+=a%3+48;
			a/=3;
		}
		for(int i=b.length()-1;i>=0;i--)
			cout << b[i];
		cout << "\n";
	}
} 
