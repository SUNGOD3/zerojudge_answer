#include <iostream>
#include <cmath>
#include <map>
using namespace std;
long long a[25],n,m,ans;
map <long long,bool> mp;
bool used[25];
bool isPrime(long long x){
	if(x%2==0)return 0;
	for(long long y=3;y<=sqrt(x);y+=2)
		if(x%y==0)return 0;
	return 1;
}
void dfs(int it,long long v,int k){
	if(k==m){
		if(mp.find(v)!=mp.end()){
			ans+=mp[v];
		}
		else{
			if(isPrime(v)){
				mp[v]=1;
				++ans;
			}
			else{
				mp[v]=0;
			}
		}
		return;
	}
	for(int i=it;i<n;++i){
		if(used[i]==0){
			used[i]=1;
			dfs(i+1,v+a[i],k+1);
			used[i]=0;
		}
	}
	return;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n;++i){
		cin >> a[i];
	}
	dfs(0,0,0);
	cout << ans;
} 
