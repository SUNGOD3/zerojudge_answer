#include <iostream>
#include <map>
using namespace std;
map <string,int> a;
int n,m,ans,it;
string cn,tmp[200001];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> m >> n;
	for(int i=0;i<n;++i){
		cin >> cn;
		++a[cn];
		tmp[i]=cn;
		if(i>=m){
			--a[tmp[it]];
			if(a[tmp[it]]==0)
				a.erase(tmp[it]);
			++it;
		}
		if(i>=m-1)
			if(a.size()==m)
				++ans;
	}
	cout << ans; 
} 
