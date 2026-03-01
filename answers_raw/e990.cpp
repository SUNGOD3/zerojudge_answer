#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	double t,n;
	while(cin >> t >> n){
		cout << fixed  <<  setprecision(3) << (-1*log(n)*t)/log(2) << "\n";
	}
} 
