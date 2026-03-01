#include <iostream>
using namespace std;
int dp[2],t;
string a;
int main(){
	cin >> t;
	getline(cin,a);
	while(t--){
		getline(cin,a);
		int al=a.length(),tmp[128]={0},it=1;
		bool ans=1;
		dp[0]=0;
		dp[1]=0;
		for(int i=0;i<al&&ans;++i){
			if(a[i]=='('){
				++dp[0];
				tmp[it]=1;
				++it;
			}
			else if(a[i]=='['){
				++dp[1];
				tmp[it]=2;
				++it;
			}
			else if(a[i]==']'){
				if(tmp[it-1]!=2)ans=0;
				--dp[1];
				--it;
				tmp[it]=0;
				if(dp[1]<0)ans=0;
			}
			else{
				if(tmp[it-1]!=1)ans=0;
				--dp[0];
				--it;
				tmp[it]=0;
				if(dp[0]<0)ans=0;
			}
		}
		if(dp[0]||dp[1])ans=0;
		if(ans)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
} 
