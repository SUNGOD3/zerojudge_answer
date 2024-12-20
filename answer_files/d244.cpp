#include <iostream>
#include <string>
#include <sstream> 
#include <algorithm>
using namespace std;
int main(){
	string a;
	while(getline(cin,a)){
		int n=1;
		for(int i=0;i<a.length();i++){
			if(a[i]==' ')
				n++;
		}
		stringstream ss(a);
		int b[n];
		for(int i=0;i<n;i++)
			ss>>b[i];
		sort(b,b+n);
		for(int i=0;i<n-1;i+=3){
			if(b[i]!=b[i+1]||b[i+1]!=b[i+2]){
				cout << b[i] << endl;
				break;
			}
		}
	}
}
