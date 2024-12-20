#include <iostream>
using namespace std;
int x,y,z;
int main(){
	cin >> x >> y >> z;
	cout << max(x,max(y,z));
}
