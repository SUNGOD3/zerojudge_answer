#include <iostream>
using namespace std;
long n;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	while(cin >> n){
		if(n==0)return 0;
		long a=0,b=0;
		for(long i=0,ba=1,c=0;i<32;++i,ba*=2,n/=2)
			if(n%2){
				++c;
				(c%2)?a+=ba:b+=ba;
			}
		cout << a << " " << b << "\n"; 
	}
}
