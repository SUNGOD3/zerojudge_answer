#include <iostream>
#include <string>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	string a,b,c;
	getline(cin,a);
	getline(cin,b);
	for(int i=0;i<a.length();i++){
		c+=a[i];
		if(a[i]==' '||i==a.length()-1){
			cout << b << ", " << c << endl;
			c.clear();
		} 
	}
} 
