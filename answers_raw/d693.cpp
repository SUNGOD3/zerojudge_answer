#include <iostream>

using namespace std;

int gcd(long long int m, long long int n) { 
    if(n == 0) 
        return m; 
    else 
        return gcd(n, m % n); 
}

int main(){
	int a=0;
	while(cin >> a){
		if(a!=0){
			long long int b[a];
			for(int i=0;i<a;i++){
				cin >> b[i];
			}
			for(int i=0;i<a-1;i++){
				b[i+1]=(b[i]*b[i+1])/gcd(b[i],b[i+1]);
			}
			cout << b[a-1] << endl;
		}
	}
} 



