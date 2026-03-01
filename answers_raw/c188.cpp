#include <iostream>
using namespace std;
long long int ans[201]={1},n;
int main(){
	for(int i=1;i<201;++i){
		for(int j=i;j<201;++j){
			ans[j]+=ans[j-i];
		}
	}
	while(cin >> n){
		cout << ans[n] << "\n";
	}
} 
