#include <iostream>
using namespace std;
int n,m,ans=1e9,a[100005],b[100005],DP[105],r[100005],l[100005];//higher next
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n >> m;
	for(int i=0;i<101;++i)
		DP[i]=-1;
	for(int i=0;i<n;++i){
		cin >> a[i];
		int lv=-1;
		for(int j=a[i];j<=100;++j)
			lv=max(lv,DP[j]);
		l[i]=lv;
		DP[a[i]]=i;
	}
	for(int i=1;i<n;++i){
		cin >> b[i];
		b[i]+=b[i-1];
	}
	for(int i=0;i<101;++i)
		DP[i]=1e9;
	for(int i=n-1;i>=0;--i){
		int rv=1e9;
		for(int j=a[i];j<=100;++j)
			rv=min(rv,DP[j]);
		r[i]=rv;
		DP[a[i]]=i;
	}
	for(int i=0;i<n;++i){
		if(l[i]!=-1&&a[i]*(b[i]-b[l[i]])>=m)ans=min(ans,a[i]*(b[i]-b[l[i]]));
		if(r[i]!=1e9&&a[i]*(b[r[i]]-b[i])>=m)ans=min(ans,a[i]*(b[r[i]]-b[i]));
	}
	if(ans==1e9)
		cout << "-1";
	else
		cout << ans;
}
