#include <bits/stdc++.h>
using namespace std;
int a[1005],n;
char c;
int main(){
	while(cin >> a[n]){
		++n;
		cin >> c;
	}
	sort(a,a+n);
	for(int i=0;i<n;++i){
		if(i)cout << "+";
		cout << a[i]; 
	}
} 
