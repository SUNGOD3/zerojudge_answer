#include <iostream>
using namespace std;
long long int dp[35][35];
int main(){
	long long int a,b;
	cin >> a >> b;
	dp[0][0]=1;
	for(int y=0;y<b;++y){
		for(int x=0;x<a;++x){
			if(dp[y][x]!=0){
				if(x==0){
					dp[y+1][a-1]+=dp[y][x];
					dp[y+1][1]+=dp[y][x];
				}
				else if(x==a-1){
					dp[y+1][0]+=dp[y][x];
					dp[y+1][a-2]+=dp[y][x];
				}
				else{
					dp[y+1][x+1]+=dp[y][x];
					dp[y+1][x-1]+=dp[y][x];
				}
			}
		}
	}
	cout << dp[b][0];
} 
