#include <iostream>
using namespace std;
int a[505],k,n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> k;
		a[k]++;
	}
	n=n/2+1;
	for(int i=0;i<=500;++i){
		n-=a[i];
		if(n<=0){
			cout << i ;
			break;
		}
	}
} 
