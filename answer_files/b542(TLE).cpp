#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
long long int n,m,a[100001],f;
map <long long int,long long int> fd;
map <long long int,bool> ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n;++i){
		cin >> a[i];
		++fd[a[i]];
		if(fd[a[i]]>1){
			ans[0]=1;
		}
	}
	sort(a,a+n);
	for(int i=0;i<m;++i){
		cin >> f;
		bool c=1;
		if(ans.find(f)!=ans.end())c=0;
		for(int i=0;i<n&&c;++i){
			if(fd.find(a[i]+f)!=fd.end()){
				ans[a[i]+f]=1;
				c=0;
			}
		}
		if(c)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
} 
