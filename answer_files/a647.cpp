#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n;
	double a,b;
	cin >> n;
	while(n--){
		cin >> a >> b;
		double p=(a-b)/a*(-100);
		if(p==-0)
			p*=-1;
		else if(p>0)
			p+=0.000001;
		else if(p<0)
			p-=0.000001;
		cout  <<  fixed <<  setprecision(2) << p ;
		(p>=10||p<=-7)?cout << "% dispose\n":cout << "% keep\n";
	}
} 
