#include <iostream>
using namespace std;
int main(){
	double a,b,c,d;
	while(cin >> a >> b >> c >> d){
		d=b*d/100;
		if(a==0)break;
		double day=0,n=0;
		while(1){
			day++;
			n+=b;
			if(n>a){
				cout << "success on day " << day << "\n";
				break;
			};
			n-=c;
			if(n<0){
				cout << "failure on day " << day << "\n";
				break;
			};
			b=max(b-d,0.0);
		}
	}
}
