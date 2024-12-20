#include <bits/stdc++.h>
using namespace std;
int n,k,ans,x,tmp;
priority_queue <pair <int,int>> pq;//v it;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n >> k;
	pq.push({0,0});
	for(int i=1;i<=n;++i){
		cin >> x;
		while(!pq.empty()&&i-pq.top().second>k)pq.pop();
		tmp+=x;
		ans=max(ans,tmp+pq.top().first);
		pq.push({-tmp,i});
	}
	cout << ans;
} 
