#include <iostream>
#include <climits> 
using namespace std;
long long dp[550][550],n,m,v,x,y;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			dp[i][j]=INT_MAX;
			if(i==j)dp[i][j]=0;
		}
	} 
	for(int i=0;i<m;++i){
		cin >> x >> y >> v;
		dp[x][y]=dp[y][x]=min(dp[x][y],v);
	}
	for(int k=0;k<n;++k){
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				dp[i][j]=min(max(dp[i][k],dp[k][j]),dp[i][j]);
			}
		}
	} 
	cin >> x >> y;
	if(dp[x][y]==INT_MAX){
		cout << "-1";
	}
	else{
		cout << dp[x][y];
	}
} 
