#include <iostream>
using namespace std;
long long int ans[8001]={1};
int c[8]={1,13,33,43,139,169,1309,2597},n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=0;i<8;++i){
		for(int j=0;j<=8000;++j){
			if(j+c[i]>8000)break;
			ans[j+c[i]]+=ans[j];
		}
	}
	while(cin >> n)
		cout << ans[n] << "\n";
} 
