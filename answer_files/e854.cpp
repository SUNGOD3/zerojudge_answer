#include <iostream>
using namespace std;
string a,b;
int c[26];
int main(){
	getline(cin,a);
	getline(cin,b);
	int al=a.length(),bl=b.length();
	for(int i=0;i<bl;++i)
		if(b[i]>='A')
			++c[b[i]-'A'];
	for(int i=0;i<al;++i){
		if(a[i]>='A'&&c[a[i]-'A'])
			--c[a[i]-'A'];
		else if(a[i]>='A'&&c[a[i]-'A']==0)
			break;
		cout << a[i];
	}
} 
