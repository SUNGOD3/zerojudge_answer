#include <iostream>
using namespace std;
int main(){
	long long int a=0,p=0,q=0;
	while(cin >> a){
		long long int b;
		for(int i=0;i<a;i++){
			scanf("%lld",&b);
			p+=b;
			q+=b*b;
		}
		printf("%lld\n",(p*p-q)/2);
		a=0;p=0;q=0;
	}
} 
