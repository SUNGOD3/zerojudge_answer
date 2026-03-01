#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	while(getline(cin,a)){
		int b=0,c=0;
		char q;
		for(int i=0;i<a.length();i++){
			if(a[i]>='0'&&a[i]<='9'){
				b+=a[i]-48;
				b*=10;
			}
			else if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='%'){
				q=a[i];
				c=b/10;
				b=0;
			} 
		}
		b/=10;
		if(q=='+')
			cout << b+c << endl;
		else if(q=='-')
			cout << c-b << endl;
		else if(q=='*')
			cout << b*c << endl;
		else if(q=='/')
			cout << c/b << endl;
		else
			cout << c%b << endl;
	}
} 
