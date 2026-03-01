#include <iostream>
using namespace std;
long long nx[205],n;
int main(){
	cin >> n;
	nx[1]=1;
	for(int i=2;i<=n;++i){
		nx[i]=nx[i-1]+i*i-i+1;
	}
	cout << nx[n];
} 
