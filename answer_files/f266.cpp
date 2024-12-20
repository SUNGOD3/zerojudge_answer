#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a[5];
	for(int i=0;i<5;++i)
		cin >> a[i];
	for(int i=0;i<5;++i){
		for(int j=i;j<5;++j)
			cout << a[j] << " ";
		cout << "\n";
	}
} 
