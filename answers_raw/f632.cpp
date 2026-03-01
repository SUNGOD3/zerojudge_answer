#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int t1,t2,k,p,it,ans,ap,xx,yy;
vector <pair<int,int>> a;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t1 >> t2 >> k >> p;
	while(cin >> xx >> yy){
		a.push_back(make_pair(xx,yy));
		++it;
	}
	sort(a.begin(),a.end());
	priority_queue <int> pq;
	for(int i=t1,h=0;i<=t2;i+=k){
		while(h<it&&a[h].first<=i){
			pq.push(a[h].second);
			++h;
		}
		for(int j=0;j<p&&!pq.empty();++j){
			ans+=pq.top();
			pq.pop();
			++ap;
		}
	}
	cout << ap << " " << ans;
} 
