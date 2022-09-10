#include <iostream>
long long int ans[31]={1,2},n;
using namespace std; 
int main(){
	for(int i=2;i<31;++i)
		if(i%2)
			ans[i]=ans[i-1]*2+ans[i-2];
		else
			ans[i]=ans[i-2]+ans[i-1];
	while(cin >> n){
		if(n==-1)break;
		if(n%2)
			cout << "0\n";
		else
			cout << ans[n] << "\n";
	}
}
