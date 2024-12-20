#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int ca=0;
	string a,b;
	while(getline(cin,a)){
		if(a=="#")break;
		getline(cin,b);
		cout << "Case #" << ++ca << ": you can visit at most ";
		int al=a.length(),bl=b.length(),dp[al+1][bl+1];
		a=' '+a;
		b=' '+b;
		for(int i=0;i<=al;++i)
			dp[i][0]=0;
		for(int j=0;j<=bl;++j)
			dp[0][j]=0;
		for(int i=1;i<=al;++i){
			for(int j=1;j<=bl;++j){
				if(a[i]==b[j])
					dp[i][j]=dp[i-1][j-1]+1;
				else
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
		cout << dp[al][bl] << " cities.\n";
	}
} 
