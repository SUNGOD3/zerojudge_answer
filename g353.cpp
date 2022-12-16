#include <iostream>
using namespace std;
string s;
int a[1001],sz;
int main(){
	getline(cin,s);
	for(int i=0;i<s.size();++i){
		if(s[i]>='0'&&s[i]<='9'){
			int ct=0;
			while(s[i]>='0'&&s[i]<='9'){
				ct*=10;
				ct+=s[i]-'0';
				++i;
			}	
			a[sz++]=ct;
		}
	}
	cout << a[sz/2];
} 
