#include <iostream>
using namespace std;
int n,m,d,t;
string dp[1051]={"1"};
string add(string a,string b){
	int tmp[1001]={0},al=a.length(),bl=b.length();
	string c;
	for(int i=0;i<al;++i)tmp[al-i-1]+=a[i]-'0';
	for(int i=0;i<bl;++i)tmp[bl-i-1]+=b[i]-'0';
	for(int i=0;i<1000;++i)
		if(tmp[i]>9){
			++tmp[i+1];
			tmp[i]-=10;
		}
	for(int i=1000;i>=0;--i)
		if(tmp[i]){
			al=i;
			break;
		}
	for(int i=al;i>=0;--i)c+=tmp[i]+'0';
	return c;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m >> d;
	while(d--){
		cin >> t;
		dp[t]="-1";
	}
	for(int i=0;i<=n;++i){
		if(dp[i]=="-1")continue;
		for(int j=1;j<=m&&i+j<=n;++j){
			if(dp[i+j]=="-1")continue;
			dp[i+j]=add(dp[i+j],dp[i]);
		}
	}
	cout << dp[n];
} 
