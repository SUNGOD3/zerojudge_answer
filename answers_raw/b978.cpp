#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	string a;
	while(cin >> a){
		string b=a;
		for(int i=0,al=a.length();i<al;i++){
			cin >> n;
			b[n-1]=a[i];	
		}
		cout << b << "\n";
	}
} 
