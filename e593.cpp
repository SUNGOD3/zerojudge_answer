#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int t,n,m,k,a[1005];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		int ans=0;
		cin >> n >> m;
		priority_queue <int> q;
		for(int i=0;i<n;++i){
			cin >> a[i];
		} 
		sort(a,a+n);
		for(int i=0;i<m;++i){
			cin >> k;
			if(k)q.push(k);
		}
		for(int i=n-1;i>=0;--i){
			queue <int> tmp;
			while(a[i]&&q.empty()==0){
				tmp.push(q.top()-1);
				q.pop();
				--a[i];
				++ans;
			}
			ans+=a[i];
			while(tmp.empty()==0){
				if(tmp.front())
					q.push(tmp.front());
				tmp.pop();
			}
		}
		while(q.empty()==0){
			ans+=q.top();
			q.pop();
		}
		cout << ans << "\n";
	} 
} 
