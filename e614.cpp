#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	long long int a[3];
	cin >> a[0];
	while(cin >> a[0] >> a[1] >> a[2]){
		sort(a,a+3);
		(a[0]+a[1]>a[2])?cout << "OK\n":cout << "Wrong!!\n";
	}
} 
