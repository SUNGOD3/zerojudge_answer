#include <iostream>
using namespace std;
long long int m,n,a[10001],b[10001],c[10001],ans[10001],score=-1000000,tmp;
int main(){
	cin >> m >> n;
	while(m--){
		for(int i=0;i<n;++i){
			cin >> a[i];
			b[i]=0;
			c[i]=0;
		}
		b[0]=ans[0]+a[0];
		for(int i=1;i<n;++i){
			b[i]=max(ans[i]+a[i],b[i-1]+a[i]);
		}
		c[n-1]=ans[n-1]+a[n-1];
		for(int i=n-2;i>=0;--i){
			c[i]=max(ans[i]+a[i],c[i+1]+a[i]);
		}
		for(int i=0;i<n;++i){
			ans[i]=max(b[i],c[i]);
		}
	}
	for(int i=0;i<n;++i){
		score=max(score,ans[i]);
	}
	cout << score;
}
