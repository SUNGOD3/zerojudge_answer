#include <iostream>
#include <algorithm>
using namespace std;
string a[1001];
int dp[1001][4],t,x,y;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> x >> y;
		for(int i=0;i<1001;++i)
			for(int j=0;j<4;++j)
				dp[i][j]=0;
		int ans[y]={0},anss=0;
		string aa;
		for(int i=0;i<x;++i){
			cin >> a[i];
			for(int j=0;j<y;++j){
				if(a[i][j]=='A')
					++dp[j][0];
				else if(a[i][j]=='C')
					++dp[j][1];
				else if(a[i][j]=='G')
					++dp[j][2];
				else
					++dp[j][3];
			}
		}
		for(int i=0;i<y;++i){
			ans[i]=max(max(dp[i][0],dp[i][1]),max(dp[i][2],dp[i][3]));
			for(int j=0;j<4;++j){
				if(ans[i]==dp[i][j]){
					if(j==0){
						aa+='A';
						anss+=x-dp[i][j];
						break;
					}
					else if(j==1){
						aa+='C';
						anss+=x-dp[i][j];
						break;
					}
					else if(j==2){
						aa+='G';
						anss+=x-dp[i][j];
						break;
					}
					else{
						aa+='T';
						anss+=x-dp[i][j];
						break;
					}
				}
			}
		}
		cout << aa << "\n" << anss << "\n";
	}
} 
