#include <bits/stdc++.h>
using namespace std;
long long n,ct,i=1;
int main(){
	cin >> n;
	while(i*i<=n)++ct,++i;
	cout << ct ;
} 
