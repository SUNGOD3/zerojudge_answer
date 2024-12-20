#include <iostream>
using namespace std;
int n,a[22][22];
int main(){
	a[0][0]=1;
	for(int i=0;i<=20;++i){
		for(int j=0;j<=i;++j){
			a[i+1][j]+=a[i][j];
			a[i+1][j+1]+=a[i][j];
		}
	}
	cin >> n;
	for(int i=0;i<n;++i){
		for(int j=0;j<=i;++j){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
