#include <iostream>
using namespace std;
int n,m,a[1005],ans;
int main(){
	cin >> n >> m;
	for(int i=1;i<=n;++i){
		cin >> a[i];
	} 
	for(int i=m-1,t=a[m];i>0;--i){
		if(a[i]>t){
			t=a[i];
			++ans;
		}
	}
	for(int i=m+1,t=a[m];i<=n;++i){
		if(a[i]>t){
			t=a[i];
			++ans;
		}
	}
	cout << ans;
} 
