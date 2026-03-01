#include <iostream>
using namespace std;
int n,m;
bool p[10001]={1,1};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=2;i<=100;++i)
		for(int j=i+i;j<=10000;j+=i)
			p[j]=1;
	cin >> m;
	while(m--){
		cin >> n;
		n=n/2;
		++n;
		while(p[n])
			++n;
		cout << n << "\n";
	}
} 
