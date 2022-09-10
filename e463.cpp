#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <ll> ans;
ll DP[105],lDP[16]={1};
void dfs(ll s,ll n,ll len){
	ans.push_back(s);
	for(ll i=1;i<=n/2;++i)
		dfs(i*lDP[len]+s,i,len+DP[i]);
}
//136,122,550,100
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	ll s;
	for(ll i=1;i<=15;++i)
		lDP[i]=lDP[i-1]*10;
	for(ll i=1;i<=100;++i){
		if(i<10)DP[i]=1;
		else if(i<100)DP[i]=2;
		else DP[i]=3;
	}
	while(cin >> s){
		ans.clear();
		dfs(s,s,DP[s]);
		cout << ans.size() << "\n";
		sort(ans.begin(),ans.end());
		for(int i=0;i<ans.size();++i)
			cout << ans[i] << " ";
		cout << "\n";
	}
} 
