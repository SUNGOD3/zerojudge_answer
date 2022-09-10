#include <iostream>
using namespace std;
string t="¤§",s="¬O";
int main(){
	string a;
	while(cin >> a){
		int i=0,al=a.length();
		string b,c;
		for(;i<al;i+=3){
			if((a[i]==t[0]&&a[i+1]==t[1]&&a[i+2]==t[2])||(a[i]==s[0]&&a[i+1]==s[1]&&a[i+2]==s[2])){
				break;
			}
			b+=a[i];
			b+=a[i+1];
			b+=a[i+2];
		}
		for(i+=3;i<al;i+=3){
			c+=a[i];
			c+=a[i+1];
			c+=a[i+2];
		}
		cout <<c<<b<< "\n";
	}
} 
