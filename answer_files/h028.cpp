#include <iostream>
#include <queue>
#include <set>
#include <map>
using namespace std;
long long n,l,ans,a[100005][2],amax;
map <long long,long long> mp;
queue <pair <long long,long long>> q;
set <long long> s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> l;
	s.insert(0);
	mp[0]=mp[l]=1e10;
	s.insert(l);
	for(int i=0;i<n;++i){
		cin >> a[i][0];
		s.insert(a[i][0]);
	}
	for(int i=0;i<n;++i){
		cin >> a[i][1];
		mp[a[i][0]]=a[i][1];
		q.push(make_pair(a[i][0],a[i][1]));
	}
	while(q.empty()==0){
		pair <long long,long long> p=q.front();
		q.pop();
		if(s.count(p.first)==0)continue;
		long long lft=*(--s.find(p.first)),rgt=*(++s.find(p.first));
		//cout << lft << " " << rgt << "\n";
		if(lft<=p.first-p.second||rgt>=p.first+p.second){
			++ans;
			amax=max(amax,p.second);
			s.erase(p.first);
			q.push(make_pair(lft,mp[lft]));
			q.push(make_pair(rgt,mp[rgt]));
		}
	}
	cout << ans << "\n" << amax;
} 
