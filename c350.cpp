#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	while(cin >> a >> b >> c){
		int sum=0;
		sum+=a;
		while(a>=b){
			a-=b;
			sum+=c;
			a+=c;
		}
		cout << sum << "\n";
	}
} 
