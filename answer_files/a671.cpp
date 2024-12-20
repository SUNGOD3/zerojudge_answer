#include <iostream>
#include <cmath>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	double a,b;
	while(cin >> a >> b)
		cout << (int)(exp(log(b)/a)+0.5) << "\n";
} 
