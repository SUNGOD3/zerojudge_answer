#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,d,r;
	while(cin >> n >> d >> r){
		if(d==0&&n==0&&r==0)break;
		int a[n],b[n],ans=0;
		for(int i=0;i<n;++i){
			cin >> a[i];
		}
		for(int i=0;i<n;++i){
			cin >> b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		for(int i=0,ni=n-1;i<n;++i,--ni){
			int tmp=a[i]+b[ni]-d;
			if(tmp>0)ans+=tmp*r;
		}
		cout << ans << "\n";
	}
} 
