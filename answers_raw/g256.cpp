#include <iostream>
using namespace std;
long long n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		long long ans=0;
		while(n!=1){
			if(n%2)
				n=n*3+1;
			else
				n/=2;
			++ans; 
		}
		cout << ans << "\n";
	}
} 
