#include <iostream>
#include <algorithm>
using namespace std;
int a[100001],n;
int main(){
	cin >> n;
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	cout << a[n/2-(n%2?0:1)];
} 
