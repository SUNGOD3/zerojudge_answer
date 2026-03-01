#include <iostream>

using namespace std;
// 2 * ( ( N+1 ) / 2 ) ^ 2 -1
int main(){
	long long int n=0,a=1,sum=0;
	while(cin >> n){
		a=2*((n+1)/2)*((n+1)/2)-1;
		if(n>1){
			sum=a*3-6;
		}
		else if(n==1){
			sum=1;
		}
		cout << sum << endl;
		a=1;
		sum=0; 
	}
} 
