#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	cout << n << " = ";
	bool start=0;
	int s=sqrt(n);
	for(int i=2;i<=s;++i){
		int tt=0;
		while(n%i==0){
			++tt;
			n/=i;
		}
		if(tt>1){
			if(start)cout << "* ";
			cout << i << "^" << tt << " ";
			start=1;
		}
		else if(tt){
			if(start)cout << "* ";
			cout << i << " ";
			start=1;
		}
	}
	if(n!=1){
		if(start)cout << "* ";
		cout << n;
	}
} 
