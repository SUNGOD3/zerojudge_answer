#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(getline(cin,a)){
		int al=a.length();
		for(int i=0;i<al;i++){
			if(a[i]>='A'&&a[i]<='Z'){
				a[i]+=32;
			}
		}
		for(int i=0;i<al;i++){
			while(a[i]==' '){
				i++;
			}
			a[i]-=32;
			cout << a << "\n";
			a[i]+=32;
		}
	} 
} 
