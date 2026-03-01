#include <iostream>
using namespace std;
int n,c[105],x;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> x;
		c[(x%1000)/10]++;
	}
	for(int i=0;i<101;++i){
		if(c[i]){
			cout << i << " " << c[i] << "\n";
		}
	}
} 
