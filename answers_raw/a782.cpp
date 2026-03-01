#include <iostream>
#include <string>

using namespace std;

int main(){
	string a,b,c;
	bool last;
	while(getline(cin,a)){
		if(a!="END"){
			for(int i=0;i<a.length();i++){
				if(i==0){
					b=a[0]-32;
					cout << b;
				}
				if(a[i]==' '){
					b=a[i+1]-32;
					cout << b;
				}
			}
			cout << " ";
			for(int i=a.length()-1;i>=0;i--){
				if(a[i]!=' '){
					c+=a[i];
				}
				else{
					break;
				}
			}
			for(int i=c.length()-1;i>=0;i--){
				cout << c[i];
			}
			c.clear();
			cout << endl;
		}
	}
} 
