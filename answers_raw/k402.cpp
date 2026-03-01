#include <iostream>
using namespace std;
long long n,a,b,c;
int main(){
	cin >> n;
	for(int i=0;i<n;++i){
		if(i==1)a=1;
		c=a+b;
		a=b;
		b=c;
	}
	cout << c;
} 
