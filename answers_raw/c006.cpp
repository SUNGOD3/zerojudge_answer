#include <iostream>
using namespace std;
int main(){
	int a,b;
	while(cin >> a){
		int sum=1080;
		cin >> b;
		if(a==0&&b==0)
			break;
		(b>a)?sum+=(40-b+a)*9:sum+=(a-b)*9;	
		a=b;
		cin >> b;
		(a>b)?sum+=(40-a+b)*9:sum+=(b-a)*9;
		a=b;
		cin >> b;
		(b>a)?sum+=(40-b+a)*9:sum+=(a-b)*9;
		cout << sum << "\n";
	}
} 
