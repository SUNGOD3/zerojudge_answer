#include <iostream>
using namespace std;
int n,x,y,z;
char c;
int main(){
	cin >> n;
	for(int i=1;i<=n;++i){
		cin >> c >> x >> c >> y;
		if(c=='-')cout << x-y << "\n";
		else cout << x+y << "\n";
	}
} 
