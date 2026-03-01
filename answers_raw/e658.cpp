#include <iostream>
#include <cmath>
using namespace std;
long long int mmax=1000000000000000000,n;
long long int bs(long long int l,long long int r){
	if(l>r)return r;
	long long int m=(r+l)/2,all=sqrt(2*n-m);
	if(all<m)
		return bs(l,m-1);
	else if(all>m)
		return bs(m+1,r);
	return m;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cout << bs(1,mmax) << "\n";
	}
} 
