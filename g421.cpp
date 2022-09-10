#include <iostream>
#include <queue>
using namespace std;
priority_queue <int,vector <int>,greater <int> > q;
int n,m,k,ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<m;++i){
		q.push(0);
	}
	for(int i=0;i<n;++i){
		cin >> k;
		int tmp=q.top();
		q.pop();
		ans=max(ans,tmp+k);
		q.push(tmp+k);
	}
	cout << ans;
} 
