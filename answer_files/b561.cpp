#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,b;
	while(cin >> a){
		double aa,bb,aall=0,ball=0;
		while(a--){
			cin >> aa;
			aa/=2;
			aa*=aa*3.14159;
			aall+=aa;
		}
		cin >> b;
		while(b--){
			cin >> bb;
			bb/=2;
			bb*=bb*3.14159;
			ball+=bb;
		}
		aall-=ball;
		if(aall<0)aall*=-1;
		cout << fixed <<  setprecision(2) << aall << "\n";
	}
} 
