#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	int t,n,p,q,a[30];
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		cin >> n >> p >> q;
		int s=0,ans=0;
		for(int i=0;i<n;++i)
			cin >> a[i];
		sort(a,a+n);
		for(int i=0;i<n;++i)
			if(s+a[i]<=q){
				++ans;
				s+=a[i];
			}
		cout << "Case " << ca << ": " << min(ans,p) << "\n"; 
	}
}
