#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a,i;
	
	while(	cin >> a){
		i =0;
		long long ans=0;
		while(a>0){
			ans += a%2*pow(10,i);
			a/=2;
			i++;
		}
		cout << ans<<endl;
	}
	return 0;
}
