#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
	string a[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	string b;
	string d;
	getline(cin,b);
	int i=0;
	while(getline(cin,b)){
		int k=0;
		b+=' ';
		char c='@';
		while(k<b.length()){
			for(i=k;b[i]!=' ';i++){
				d+=b[i];
			}
			k+=d.length();
			k++;
			for(int j=0;j<26;j++){
				c++;
				if(d==a[j])
					cout << c;	
			}
			c='@';
			d.clear();
		}
		cout << endl;
	}
} 
