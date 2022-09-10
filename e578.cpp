#include <iostream>
#include <string>
using namespace std;
int main(){
	string one="`1234567890-=";
	string q="qwertyuiop[]";
	string a="asdfghjkl;'";
	string z="zxcvbnm,./";
	string x;
	while(getline(cin,x)){
		for(int i=0;i<x.length();i++){
			for(int j=0;j<one.length();j++){
				if(x[i]==one[j]){
					cout << one[j-2];
				}
			}
			for(int j=0;j<q.length();j++){
				if(x[i]==q[j]){
					cout << q[j-2];
				}
			}
			for(int j=0;j<a.length();j++){
				if(x[i]==a[j]){
					cout << a[j-2];
				}
			}
			for(int j=0;j<z.length();j++){
				if(x[i]==z[j]){
					cout << z[j-2];
				}
			}
			if(x[i]==' '){
				cout << ' ';
			}
			if(x[i]=='\\'){
				cout << '[';
			}
		}
		cout << endl;
	}
} 
