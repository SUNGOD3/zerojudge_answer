#include <iostream>
#include <cmath>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int a;
	while(cin >> a){
		if(a<0){
			a*=-1;
			int b=1;
			for(int i=2;i<=sqrt(a);i++){
				if(a%(i*i)==0){
					a/=i*i;
					b*=i;
					i=1;
				}
			}
			if(b!=1){
				cout << b;
			}
			if(a!=1)
			cout << "_/" << a << "i\n";
			else
			cout << "i\n";
		}
		else if(a==0||a==1){
			cout << a << "\n";
		}
		else{
			int b=1;
			for(int i=2;i<=sqrt(a);i++){
				if(a%(i*i)==0){
					a/=i*i;
					b*=i;
					i=1;
				}
			}
			if(b!=1){
				cout << b;
			}
			if(a!=1)
			cout << "_/" << a << "\n";
			else
			cout << "\n";
		} 
	}
} 
