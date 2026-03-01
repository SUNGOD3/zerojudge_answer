#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	cin >> n;
	long long int a[n];
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	do{
		for(int i=0;i<n;++i)
			cout << a[i] << " ";
		cout << "\n";
	}while(next_permutation(a,a+n));
} 
