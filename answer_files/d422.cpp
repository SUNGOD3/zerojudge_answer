#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(getline(cin,a)){
		for(int i=0,al=a.length(),n=0;i<al;i++){
			if(a[i]>='0'&&a[i]<='9'){
				n+=a[i]-'0';
				while(a[i+1]>='0'&&a[i+1]<='9'){
					i++;
					n+=a[i]-'0';
				}
				i++;
				if(a[i]=='b')
					a[i]=' ';
				while(n--)
					cout << a[i];
			}
			else if(a[i]=='!')
				cout << "\n";
			n=0;
		}
		cout << "\n";
	}
} 
