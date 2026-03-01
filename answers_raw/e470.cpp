#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double n,y=0.577215664901532;
int main(){
	while(cin >> n){
		cout << fixed << setprecision(3) << log(n) + y + (1/(2*n) - (1/(12*n*n))) << "\n";
	}
}
