#include <iostream>
using namespace std;
int dp[2005][2005],xl,yl;
string x,y;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> xl >> x >> yl >> y){
		x=' '+x;
		y=' '+y;
		for(int i=0;i<=xl;++i){
			dp[i][0]=i;
		}
		for(int j=0;j<=yl;++j){
			dp[0][j]=j;
		} 
		for(int i=1;i<=xl;++i){
			for(int j=1;j<=yl;++j){
				dp[i][j]=min(dp[i-1][j]+1,min(dp[i][j-1]+1,dp[i-1][j-1]+!(x[i]==y[j])));
			}
		}
		cout << dp[xl][yl] << "\n";
	}
}
