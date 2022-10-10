#include <iostream>
#include <cmath>
using namespace std;
int t;
int main(){
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		double s=0,x;
		for(int i=0;i<12;++i){
			cin >> x;
			s+=x;
		}
		s/=12.0;
		(s>=1000.0)?printf("%d $%d,%.2f\n",ca,(int)s/1000,s-(int)(s/1000)*1000):printf("%d $%.2f\n",ca,s);
	}
} 
