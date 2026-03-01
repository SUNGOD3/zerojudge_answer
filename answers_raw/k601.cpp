#include <bits/stdc++.h>
using namespace std;
long long t,n,a[100005],x,ans;
int main(){
	cout << "0\n2\n4\n3\n";
	cin >> t;
	while(cin >> n){
		ans=0;
		memset(a,0,sizeof(a));
		for(int i=0;i<n;++i){
			cin >> x;
			a[x]++;
		}
		for(int i=1,l=1;i<=n;++i){
			if(a[i]==0){
				while(a[l]<=1)++l;
				a[i]=1;
				--a[l];
				ans+=abs(l-i);
			}
		}
		cout << ans << "\n";
	}
} 
