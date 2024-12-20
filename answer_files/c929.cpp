#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(getline(cin,a)){
		string b,c;
		getline(cin,b);
		int bl=b.length(),k,al=a.length();
		for(int i=0;i<bl;i++){
			if(a[0]==b[i]){
				k=0;
				int j=i;
				while(a[k]==b[j]){
					j++;
					k++;
				}
				if(k==al){
					cout << c << "\n";
					i+=al-1;
					c.clear();
				}
				else
					c+=b[i];
			}
			else
				c+=b[i];
		}
		cout << c << "\n" ;
	}
} 
