#include <iostream>
#include <cmath>
using namespace std;
long long n,a,b;
char c;
int main(){
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a >> c;
		if(c=='*'){
			cin >> c >> b;
			for(long long j=1,k=a;j<b;++j){
				a*=k;	
			}
			cout << a << "\n";
		}
		else{
			cin >> b;
			cout << a*b << "\n"; 
		}
	}
} 
