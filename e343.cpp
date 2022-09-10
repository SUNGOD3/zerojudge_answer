#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double a,b,bmi=0;
	while(cin >> a >> b){
		bmi=a/((b/100)*(b/100));
		cout << fixed << setprecision(1) << bmi << endl;
	}
} 
