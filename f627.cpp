#include <iostream>
#include <algorithm>
using namespace std;
struct stone{
	int p,v;
};
bool cmp(stone x,stone y){
	if(x.v>y.v)return 1;
	return 0;
}
int main(){
	int n,m,ans=0;
	cin >> n >> m;
	stone a[n];
	for(int i=0;i<n;++i)
		cin >> a[i].p >> a[i].v;
	sort(a,a+n,cmp);
	for(int i=0;i<n&&m>0;++i){
		if(a[i].p<=m){
			ans+=a[i].p*a[i].v;
			m-=a[i].p;
		}
		else{
			ans+=a[i].v*m;
			m=0;
		}
	}
	cout << ans << "\n";
} 
