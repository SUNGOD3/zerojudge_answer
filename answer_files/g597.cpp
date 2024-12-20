#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
long n,m,v,ans,it,c[200005],b[200005];
pair <long ,pair <long,long> > a[200005];//begin,end,v
priority_queue <pair <long,long> > p;//end,begin,v
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<m;++i){
		cin >> a[i].first >> a[i].second.first >> a[i].second.second;
	}
	sort(a,a+m);
	for(int i=1;i<=n;++i){
		while(it<m&&a[it].first<=i){
			v+=a[it].second.second;
			p.push({-a[it].second.first,a[it].second.second});
			++it;
		}
		c[i]=v;
		while(p.empty()==0&&-p.top().first==i){
			v-=p.top().second;
			p.pop();
		}
	}
	for(int i=1;i<=n;++i){
		cin >> b[i];
	}
	sort(b+1,b+n+1);
	sort(c+1,c+n+1);
	for(int i=n,j=1;i>=1;--i,++j){
		ans+=b[i]*c[j];
	}
	cout << ans;
} 
