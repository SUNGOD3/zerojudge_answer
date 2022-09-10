#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a,b,c,d;
	while(cin >> a >> b >> c >> d){
		if(a==0&&b==0&&c==0&&d==0)break;
		double detA=a*d-b*c;
		(detA==0)?cout <<  "cheat!\n":cout << fixed << setprecision(5) << d/detA << " " << -b/detA << "\n" << -c/detA << " " << a/detA << "\n";
	}
} 
