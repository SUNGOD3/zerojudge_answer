#include <iostream>
using namespace std;
long long int ans[751]={1},c,n;
int main(){
	for(int i=1;i<=749;i+=2){
		for(int j=0;j+i<751;++j){
			ans[j+i]+=ans[j];
		}
	}
	while(cin >> c){
		while(c--){
			cin >> n;	
			cout << ans[n] << "\n";
		}
	}
} 
