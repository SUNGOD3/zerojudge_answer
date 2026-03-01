#include <iostream>
#include <string>
using namespace std;
int main(){
	long long int n,k;
	while(cin >> n >> k){
		long long int kk=k; 
		if(k==0||k==1){
			cout << "Boring!\n";
		}
		else{
			while(n>kk)
				kk*=k;
			if(kk==n){
				cout << n;
				while(n!=1){
					cout << " " << n/k;
					n/=k;
				}
				cout << "\n";
			}
			else
				cout << "Boring!\n";
		}
	}
} 
