#include <iostream>
#include <climits>
using namespace std;
long long dp[505],n,sl;
string s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	while(n--){
		cin >> s;
		for(int i=0;i<501;++i){
			dp[i]=0;
		}
		sl=s.length();
		for(int i=0;i<sl;++i){
			for(int j=max(0,i-12);j<=i;++j){
				long long tmp=0;
				for(int k=j;k<=i;++k){
					tmp*=10;
					tmp+=s[k]-'0';
				}
				if(tmp>INT_MAX||s[j]=='0'){
					tmp=0;
				}
				if(j)dp[i]=max(dp[j-1]+tmp,dp[i]);
				else dp[i]=max(tmp,dp[i]);
			}
		}
		cout << dp[sl-1] << "\n";
	}
} 
