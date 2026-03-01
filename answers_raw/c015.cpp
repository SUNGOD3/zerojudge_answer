#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long int a;
	cin >> a;
	while(cin >> a){
		long long int b1=0,b2=0,c=0;
		while(1){
			b1=a;
			b2=0;
			while(a>0){
				b2*=10;
				b2+=a%10;
				a/=10;
			}
			long long int c1=b1,c2=b2,n=log10(b1)+1;
			for(int i=0;i<n/2;i++){
				c1/=10;
				c2/=10;
			}
			if(c1==c2&&c!=0){
				cout <<c<<" "<< b1 << "\n";
				break;
			}
			c++;
			a=b1+b2;	
		}
	}
} 
