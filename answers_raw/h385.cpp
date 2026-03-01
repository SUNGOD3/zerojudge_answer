#include <iostream>
using namespace std;
long long a,b,c,d,ca,g;
long long gcd(long long x,long long y){
    if( y==0 )return x;
    return gcd( y, x%y );
}
int main(){
	while(cin >> a >> b >> c >> d){
		if(a+b+c+d==0)break;
		b*=c;
		d*=a;
		a*=c;
		cout << "Case #" << ++ca << ": " << ((b>d)?"No beer for the captain.":"You owe me a beer!");
		g=gcd(a*=2,b+=d);
		b/=g;
		a/=g;
		cout << "\nAvg. arrival time: ";
		(b%a)?cout << b << "/" << a << "\n":cout << b/a << "\n";
	}
} 
