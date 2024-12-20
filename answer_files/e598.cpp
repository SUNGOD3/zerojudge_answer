#include <bits/stdc++.h>
using namespace std;
int n,ba=1e8;
int main(){
	cin >> n;
	for(int i=2;i<10;++i){
		if(n%i==0&&n/i>=ba){
			cout << "no";
			return 0;
		}
	}
	cout << "yes";
} 
