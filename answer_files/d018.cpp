#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	int z;
	string a;
	while(getline(cin,a)){
		for(z=0;z<a.length();z++){
			if(a[z]==':') 
				a[z]=' ';
		}
		stringstream s(a);
		float n,num=0;
		while(s>>z){
			s>>n;
			if(z%2==1) 
				num+=n;
			else 
				num-=n;	
		}
		cout<<num<<endl;
	}
}
