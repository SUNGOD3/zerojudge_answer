#include <iostream>
using namespace std;
string a,b;
int main(){
	int t;
	cin >> t;
	for(int i=1;i<=t;++i){
		cin >> a >> b;
		int a0=0,a1=0,a2=0,b0=0,b1=0,b2=0;
		a0=(a[0]-48)*10+(a[1]-48);
		a1=(a[3]-48)*10+(a[4]-48);
		a2=(a[6]-48)*1000+(a[7]-48)*100+(a[8]-48)*10+(a[9]-48);
		b0=(b[0]-48)*10+(b[1]-48);
		b1=(b[3]-48)*10+(b[4]-48);
		b2=(b[6]-48)*1000+(b[7]-48)*100+(b[8]-48)*10+(b[9]-48);
		if(a1>b1||(a1==b1&&a0>=b0))
			++a2;
		a2-=b2;
		--a2;
		cout << "Case #" << i << ": ";
		if(a2<0)
			cout << "Invalid birth date\n";
		else if(a2>130)
			cout << "Check birth date\n";
		else
			cout <<  a2 << "\n";
	}
} 
