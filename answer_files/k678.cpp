#include <iostream>
using namespace std;
int n,x,y,z;
char c;
int main(){
	cin >> n;
	for(int i=1;i<=n;++i){
		cin >> x >> c >> y >> z;
		if(x+y==z){
			cout << "yes\n";
		}
		else{
			cout << "no\n";
		}
	}
} 
