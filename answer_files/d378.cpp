#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int x,y,ca=0;
	while(cin >> y >> x){
		int a[y][x],dp[y][x];
		for(int i=0;i<y;++i)
			for(int j=0;j<x;++j){
				cin >> a[i][j];
				dp[i][j]=0;
			}
		dp[0][0]=a[0][0];
		for(int i=1;i<y;++i)
			dp[i][0]=a[i][0]+dp[i-1][0];
		for(int j=1;j<x;++j)
			dp[0][j]=a[0][j]+dp[0][j-1];
		for(int i=1;i<y;++i)
			for(int j=1;j<x;++j)
				dp[i][j]=min(a[i][j]+dp[i-1][j],a[i][j]+dp[i][j-1]);
		cout << "Case #" << ++ca << " :\n" << dp[y-1][x-1] << "\n";
	}
} 
