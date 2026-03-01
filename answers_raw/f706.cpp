#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	b+=a*60+(d*90);
	a=0;
	while(b<0){
		--a;
		b+=60;
	}
	a+=b/60;
	b%=60;
	while(a<0){
		a+=36;
	}
	cout << a%36 << ":" << b/10 << b%10 << ":" << c/10 << c%10 ;
} 
