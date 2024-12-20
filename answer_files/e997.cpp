#include <iostream>
#include <string>
using namespace std;
string b[51];
int main(){
	int n,k=0;
	string a,c;
	getline(cin,a);
	a+=' ';
	cin >> n;
	for(int i=0,al=a.length();i<al;++i){
		if(a[i]==' '){
			b[k++]=c;
			c.clear();
		}
		else
			c+=a[i];
	}
	k-=n;
	cout << b[k] ;
} 
