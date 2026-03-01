#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	long long int n,a,b,c,d;
	cin >> n;
	for(int i=1;i<=n;++i){
		cin >> a >> b >> c >> d;
		cout << "Case " << i << ": " << llabs(((a+b)*(a+b+1)/2+a)-((c+d)*(c+d+1)/2+c)) << "\n";
	}
} 
