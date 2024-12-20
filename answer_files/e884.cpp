#include <iostream>
using namespace std;
int a[10001],b[10001],n,k,ans,s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> k;
	for(int i=0;i<n;++i)
		cin >> a[i];
	for(int i=0;i<n;++i)
		cin >> b[i];
	for(int i=0;i+k<=n;++i){
		while(a[i]!=b[i]){
			++ans;
			for(int j=0;j<k;++j)
				a[i+j]=(a[i+j])%9+1;
		}
	}
	for(int i=0;i<n;++i)
		if(a[i]!=b[i]){
			cout << "0";
			s=1;
			break;
		}
	if(!s)
		cout << ans;
} 
