#include <bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	cin >> n >> m;
	if(n%m==0){
		cout << "YES";
	}
	else{
		while(n){
			if(n%10==m){
				cout << "YES";
				return 0;
			}
			n/=10;
		}
		cout << "NO";
	}
} 
