#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,k;
	while(cin >> n){
		int a[n];
		string b,c;
		for(int i=0;i<n;i++)
			cin >> a[i];
		cin >> b;
		cin >> k;
		c=b;
		while(k--){
			for(int i=0;i<n;i++)
				c[i]=b[a[i]-1];
			b=c;
		}
		cout << b << "\n";
	}
} 
