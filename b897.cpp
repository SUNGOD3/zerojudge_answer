#include <iostream>
#include <cmath>
using namespace std;
long n,k,mi;
long combination(long n, long k) {
	double result = 0;
	
	for (long i = n; i > max(n - k, k); --i) {
		result += log10(i);
	}

	for (long j = min(n - k, k); j > 1; --j) {
		result -= log10(j);
	}

	return (long) (result + 1);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n >> k){
		k=min(n-k,k);
		cout << combination(n,k) << "\n";
	}
} 
