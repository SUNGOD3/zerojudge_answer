#include <iostream>
using namespace std;
bool p[1000001];
int main(){
	for(int i=2;i<=1000;i++)
		for(int j=i<<1;j<=1000000;j+=i)
			p[j]=1;
	int n;
	while(cin >> n){
		if(n==0)break;
		for(int i=3;i<=1000000;i++){
			if(p[i]==0&&p[n-i]==0){
				cout << n << " = " << i << " + " << n-i << "\n";
				break;
			}
		}
	}
}
