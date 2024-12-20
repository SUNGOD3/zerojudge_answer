#include <iostream>
#include <algorithm>
#include <memory.h>
using namespace std;
int a[100005],n;
inline long long int dam(int l,int r){
	int mid=(l+r)/2;
	if(l+1>=r)return 0;
	long long int ans=dam(l,mid)+dam(mid,r);
	sort(a+mid,a+r);
	for(int i=l;i<mid;++i)
		ans+=lower_bound(a+mid,a+r,a[i])-(a+mid);
	return ans;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		if(n==0)break;
		memset(a,0,sizeof(a));
		for(int i=0;i<n;++i)
			cin >> a[i];
		int ac=dam(0,n);
		if(ac%2)
			cout << "Marcelo\n";
		else
			cout << "Carlos\n";
	}
}
