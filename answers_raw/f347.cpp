#include <bits/stdc++.h>
using namespace std;
long long n,ans,w;
pair <long long,long long> a[5700];// p w
priority_queue <pair <long long,long long>> pq; // w p
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	while(cin >> a[n].second >> a[n].first)++n;
	sort(a,a+n);
	for(int i=0;i<n;++i){
		pq.push({a[i].second,a[i].first});
		w+=a[i].second;
		if(w>a[i].first)w-=pq.top().first,pq.pop();
		ans=max(ans,(long long)pq.size());
	}
	cout << ans << '\n';
} 
