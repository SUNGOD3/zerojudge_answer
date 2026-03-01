#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	long long int sum=0;
	string a;
	map <string,long long int> va;
	while(cin >> a){
		if(a=="0:0")break;
		string b;
		long long int i,c=0;
		for(i=0;a[i]!=':';i++)
			b+=a[i];
		for(i++;i<a.length();i++){
			c*=10;
			c+=(a[i]-48);
		}
		va[b]=c;
	}
	while(cin >> a){
		if(a=="0:0")break;
		string b;
		long long int i,c=0;
		for(i=0;a[i]!=':';i++)
			b+=a[i];
		if(va.find(b)!=va.end()){
			for(i++;i<a.length();i++){
				c*=10;
				c+=(a[i]-48);
			}
			sum+=va[b]*c;
		} 
	}
	cout << sum << "\n";
} 
