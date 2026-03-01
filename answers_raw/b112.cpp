#include <iostream>
using namespace std;
int gcd(long long int n, long long int m) { 
    if(m == 0) 
        return n; 
    else 
        return gcd(m, n % m); 
}
int main(){
	
	long long int a=0;
	while(cin >> a){
		long long int b[a];
		for(int i=0;i<a;i++){
			cin >> b[i];
		}
		if(a==1){
			cout << b[0] << endl; 
		}
		else{
			for(int i=0;i<a-1;i++){
				b[i+1]=gcd(b[i],b[i+1]);
			}
			cout << b[a-1] << endl;
		}
	}
} 
