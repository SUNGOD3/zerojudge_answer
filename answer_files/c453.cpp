#include <iostream>
using namespace std;
long long int ans[21]={1};
int n;
int main(){
	for(int i=0;i<=20;++i)
		ans[i+1]=(2*(2*i+1)*ans[i])/(i+2);
	while(cin >> n)
		cout << ans[n] << "\n";
} 
