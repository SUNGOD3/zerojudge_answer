#include <iostream>
using namespace std;
long long dp[5005]={1},x;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int t=0;t<3;++t){
		cin >> x;
		for(int i=0;i+x<5000&&t!=2;++i){
			if(dp[i])dp[i+x]=1;
		}
		if(t==2){
			if(dp[x]){
				cout << "YES";
			}
			else{
				cout << "NO";
			}
		}
	}
} 
