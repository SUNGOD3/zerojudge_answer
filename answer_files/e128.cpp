#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long int a,aa;
	while(cin >> a){
		if(a==0)break;
		aa=a;
		a=sqrt(a);
		if(a&1){
			if(aa==a*a)
				cout << "1 " << a << "\n";
			else{
				int m=((a*a+1)+(a+1)*(a+1))/2;
				++a;
				if(aa<m)
					cout <<  a-(m-aa) << " " << a << "\n";
				else if(aa>m)
					cout << a << " " << a-(aa-m) << "\n";
				else
					cout << a << " " << a << "\n";
			}
		}
		else{
			if(aa==a*a)
				cout << a << " 1\n";
			else{
				int m=((a*a+1)+(a+1)*(a+1))/2;
				++a;
				if(aa<m)
					cout << a << " " << a-(m-aa) << "\n";
				else if(aa>m)
					cout << a-(aa-m) << " " << a << "\n";
				else
					cout << a << " " << a << "\n";
			}
		}
	}
} 
