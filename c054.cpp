#include <iostream>
#include <string>
using namespace std;
int main(){
	string a={"`1234567890-="};
	string b={"QWERTYUIOP[]\\"};
	string c={"ASDFGHJKL;'"};
	string d={"ZXCVBNM,./"};
	string e;
	while(getline(cin,e)){
		for(int i=0;i<e.length();i++){
			for(int j=0;j<a.length();j++){
				if(e[i]=='`')
					e[i]='`';
				else if(e[i]==a[j])
					e[i]=a[j-1];
			}
			for(int j=0;j<b.length();j++){
				if(e[i]=='q')
					e[i]=']';
				else if(e[i]==b[j])
					e[i]=b[j-1];
			}
			for(int j=0;j<c.length();j++){
				if(e[i]=='a')
					e[i]='\'';
				else if(e[i]==c[j])
					e[i]=c[j-1];
			}
			for(int j=0;j<d.length();j++){
				if(e[i]=='z')
					e[i]='/';
				else if(e[i]==d[j])
					e[i]=d[j-1];
			}
		}
		cout << e << "\n";
	}
} 
