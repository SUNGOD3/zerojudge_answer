#include <bits/stdc++.h>
using namespace std;
int a,ma=-1e9,mi=1e9;
int main(){
	while(cin >> a){
		mi=min(a,mi);
		ma=max(a,ma);
	}
	cout << mi << " " << ma-mi;
} 
