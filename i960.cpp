#include <iostream>
using namespace std;
int n;
string s[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int main(){
	cin >> n;
	for(int i=0;i<7-n;++i)
		cout << "You can kiss me on a " << s[i] << "\n";
}
