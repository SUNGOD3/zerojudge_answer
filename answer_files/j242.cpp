#include <iostream>
#include <cmath>
using namespace std;
int n;
long long ba=1;
int main(){
	cin >> n;
	for(int i=2;i<=sqrt(n);++i){
		while(n%(i*i)==0){
			ba*=i;
			n/=(i*i);
		}
	}
	if(n==1){
		cout << ba;
	}
	else if(ba==1){
		cout << "sqrt(" << n << ")";
	}
	else{
		cout << ba << " sqrt(" << n << ")"; 
	}
} 
