#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[4],n,ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> a[2] >> a[1] >> a[0] >> n;
	for(int i=0;i<n;++i){
		a[3]=a[2];
		if(a[3])++ans;
		a[2]=a[1];
		a[1]=a[0];
		if(i==0)a[0]=1;
		else a[0]=0;
	}
	cout << ans << "\n" << a[2] << " " << a[1] << " " << a[0];
} 
