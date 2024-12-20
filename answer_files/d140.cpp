#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	long long int a,b;
	char dot;
	while(cin >> a >> dot >> b){
		a=a*100+b;
		if(a>=1&&a<=10000)
			b=a*0.9+800;
		else if(a>=10001&&a<=50000)
			b=a*0.8;
		else
			b=a*0.6;
		cout << "$" << b/100 << "." << (b%100)/10 << b%10 << "\n"; 
	}
} 
