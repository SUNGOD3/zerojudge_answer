#include <iostream>
using namespace std;
int dp[1005][1005],n,m,k,x1,y1,x2,y2;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> m >> n;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cin >> dp[i][j];
			dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
			//cout << dp[i][j] << " ";
		}
		//cout << "\n";
	}
	cin >> k;
	for(int i=0;i<k;++i){
		cin >> y1 >> y2 >> x1 >> x2;
		if(x1>x2){
			swap(x1,x2);
		}
		if(y1>y2){
			swap(y1,y2);
		}
		cout << dp[x2+1][y2+1]-dp[x2+1][y1]-dp[x1][y2+1]+dp[x1][y1] << " "; 
	}
} 
