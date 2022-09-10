#include <iostream>
using namespace std;
long long int ans[88]={0,1,2,2},k;
int main(){
	for(int i=4;i<77;++i){
		ans[i]=ans[i-2]+ans[i-3];
	}
	while(cin >> k){
		cout << ans[k] << "\n";
	}
} 
