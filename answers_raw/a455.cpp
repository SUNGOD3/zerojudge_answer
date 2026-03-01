#include <bits/stdc++.h>
using namespace std;
int n,m,bx[55],a[1005],used[1005],ans;
vector <int> dp[3005];
int main(){
	cin >> m >> n ;
	for(int i=0;i<m;++i)
		cin >> bx[i];
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(bx,bx+m);
	sort(a,a+n);
	for(int i=0;i<m;++i){
		for(int j=0;j<=bx[i];++j)
			dp[j].clear();
		int mx=0,mit=-1;
		for(int j=n-1;j>=0;--j)
			if(!used[j])
				for(int k=a[j],l=0;k<=bx[i];++k,++l)
					if(k==bx[i]||dp[l].size()<dp[k].size()+1){
						dp[l]=dp[k];
						dp[l].push_back(j);
						if(dp[l].size()>mx){
							mx=dp[l].size();
							mit=k-a[j];
						}
					}
		if(mx==0)break;
		ans+=mx;
		for(int j=0;j<dp[mit].size();++j)
			used[dp[mit][j]]=1;
	}
	cout << ans;
} 
