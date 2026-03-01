#include <iostream>
using namespace std;
bool p[671065]={1,1};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=2;i<820;++i)
		for(int j=i+i;j<671065;j+=i)
			p[j]=1;
	int n;
	while(cin >> n)
		(p[n])?cout << "It's not a prime!!!\n":cout << "It's a prime!!!\n";
} 
