#include <iostream>
#include <string>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	while(getline(cin,a)){
		string b;
		for(int i=0;i<5;i++)
			b+=a[i];
		cout << b;	
		for(int i=0;i<a.length();i++){
			if(a[i]=='o'){
				i+=3;
				cout << "||";
				for(int j=i;j<i+5;j++){
					cout << a[j];
					if(b[j-i]=='1'||a[j]=='1'){
						b[j-i]='1';
					}
					else{
						b[j-i]='0';
					}
				}
			}
			else if(a[i]=='a'){
				i+=4;
				cout << "&&";
				for(int j=i;j<i+5;j++){
					cout << a[j];
					if(b[j-i]!='1'||a[j]!='1'){
						b[j-i]='0';
					}
					else{
						b[j-i]='1';
					}
				}
			}
		}
		cout << " = " << b << "\n";
	}
} 
