#include <iostream>
#include <string>
using namespace std;
int main(){
	int a=0,i,max=0;
	string b,d;
	cin >> a;
	getline(cin,b);
		for(;a>0;a--){
			d.clear();max=0;
			int c[26]={0};
			getline(cin,b);
			for(i=0;i<b.length();i++){
				if(b[i]>=65&&b[i]<=90)
					d+=b[i];
				else if(b[i]>=97&&b[i]<=122)
					d+=b[i]-32;	
			}
			for(i=0;i<d.length();i++){
				c[d[i]-65]++;
			}
			for(i=0;i<26;i++){
				if(c[i]>max)
					max=c[i];
			}
			for(i=0;i<26;i++){
				char k='a';
				if(c[i]==max){
					k+=i;
					cout << k;
				}
			}
			cout << endl;
		}
}
