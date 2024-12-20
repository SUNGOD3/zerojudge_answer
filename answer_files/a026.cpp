#include <bits/stdc++.h>
#define ll int
using namespace std;
ll dp[1501][1501],d[1501][1501],n,m,k,ans,dplu[1501][1501],dpru[1501][1501],dpld[1501][1501],dprd[1501][1501],dplr[1501],dpud[1501];
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n >> m >> k;
	for(ll i=1;i<=n;++i)
		for(ll j=1;j<=m;++j){
			cin >> dp[i][j];
			dp[i][j]+=dp[i][j-1]+dp[i-1][j]-dp[i-1][j-1];
		} 
	for(ll i=0;i<=n-k;++i)
		for(ll j=0;j<=m-k;++j){
			d[i][j]=dp[i+k][j+k]-dp[i+k][j]-dp[i][j+k]+dp[i][j];
			dplr[i]=max(dplr[i],d[i][j]);
			dpud[j]=max(dpud[j],d[i][j]);
		}
	for(ll i=0;i<=n-k;++i){
		for(ll j=0;j<=m-k;++j)
			dplu[i][j]=max({i?dplu[i-1][j]:0,j?dplu[i][j-1]:0,d[i][j]});
		for(ll j=m-k;j>=0;--j)
			dpru[i][j]=max({i?dpru[i-1][j]:0,dpru[i][j+1],d[i][j]});
	}
	for(ll i=n-k;i>=0;--i){
		for(ll j=0;j<=m-k;++j)
			dpld[i][j]=max({dpld[i+1][j],j?dpld[i][j-1]:0,d[i][j]});
		for(ll j=m-k;j>=0;--j)
			dprd[i][j]=max({dprd[i+1][j],dprd[i][j+1],d[i][j]});
	}
	for(ll i=0;i<=n-k;++i){
		for(ll j=i+k,t=0;j<=n-k;++j){
			t=max(t,dplr[j]);
			ans=max(ans,dplu[i][m-k]+t+dpld[j+k][m-k]);
		} 
		for(ll j=0;j<=m-k;++j){
			ans=max(ans,dplu[i][m-k]+dpld[i+k][j]+dprd[i+k][j+k]);
			ans=max(ans,dpld[i+k][m-k]+dplu[i][j]+dpru[i][j+k]);
		}
	}
	for(ll i=0;i<=m-k;++i){
		for(ll j=i+k,t=0;j<=m-k;++j){
			t=max(t,dpud[j]);
			ans=max(ans,dplu[n-k][i]+t+dpru[n-k][j+k]);
		}
		for(ll j=0;j<=n-k;++j){
			ans=max(ans,dplu[n-k][i]+dpru[j][i+k]+dprd[j+k][i+k]);
			ans=max(ans,dpru[n-k][i+k]+dplu[j][i]+dpld[j+k][i]);
		}
	}
	cout << ans;	
}
