#include <iostream>
#include <cmath>
#include <map>
using namespace std;
int count,n,m;
bool p[10000000]={1,1};
map <int,int> ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	int sn=sqrt(n);
	for(int i=2;i<=sn;++i)
		for(int j=i+i;j<n;j+=i)
			p[j]=1;
	for(int i=2;i<n;++i)
		if(p[i]==0)ans[i]=++count;
	while(m--){
		cin >> n;
		cout << ans[n] << "\n";
 	}
} 
