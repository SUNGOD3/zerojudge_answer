#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,a[100005],x;
vector <int> v[100005];
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a[i];
	}
	for(int i=0;i<n;++i){
		cin >> x;
		v[x].push_back(i);
	}
	for(int i=0;i<n;++i){
		if(v[a[i]].size()==0){
			cout << "-1 ";
			//cout << "-1\n";
		}
		else{
			int it1=lower_bound(v[a[i]].begin(),v[a[i]].end(),i)-v[a[i]].begin(),it2=0;
			if(it1>0)it2=it1-1;
			if(it1==v[a[i]].size())it1-=1;
			it1=v[a[i]][it1];
			it2=v[a[i]][it2];
			//cout << i << " " << it1 << " " << it2 << "\n";
			cout << min(abs(i-it1),abs(i-it2)) << " ";
		}
	}
}
