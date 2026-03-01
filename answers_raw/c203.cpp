#include <iostream>
#include <math.h>

using namespace std;

int main(){
	long long int n=0,sum=0,i=0;
	int a=0;
	cin >> a;
	while(cin >> n){
		for(i=1;i<=n/2;i++){
			if(n%i==0){
				sum+=i;
			}
		}
		if(sum==n){
			cout << "perfect" << endl;
		}
		else if(sum>n){
			cout << "abundant" << endl; 
		}
		else{
			cout << "deficient" << endl;
		}
		n=0;sum=0;i=0;
	}
	
	
} 
