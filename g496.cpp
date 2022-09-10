#include <iostream>
using namespace std;
long long x,y;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> x >> y;
	cout << y/x+(y%x!=0);
} 
