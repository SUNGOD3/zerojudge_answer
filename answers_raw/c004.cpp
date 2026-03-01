#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a;
	while(cin >> a >> b){
		if(b>a||(a+b)%2==1||(a-b)%2==1)
			cout << "impossible\n";
		else
			cout << (a+b)/2 << " " << (a-b)/2 << "\n";
	}
}
