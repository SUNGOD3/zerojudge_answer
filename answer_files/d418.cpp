#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int a;
	cin >> a;
	while(a--){
		long long int c;
		cin >> c;
		string b;
		if(c<10){
			cout << c;
		}
		else{
			while(c!=1){
				bool k=1;
				for(int i=9;i>=2;i--){
					if(c%i==0){
						b+=i+48;
						c/=i;
						k=0; 
					}
				}
				if(k==1){
					cout << -1;
					b.clear();
					break;
				}
			}
		}
		for(int i=b.length()-1;i>=0;i--)
			cout << b[i];
		cout <<"\n";
	}
} 
