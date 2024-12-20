#include <iostream>
using namespace std;
int n,a[1000005],k,m,t;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> k >> n >> m;
		if(n==1||m==1){
			cout << "good\n";
		}
		else{
			for(int i=0;i<=k;++i){
				a[i]=0;
			}
			a[0]=1;
			int ans=0;
			for(int i=0;i<=k-n;++i){
				if(a[i])a[i+n]=1;
			}
			for(int i=0;i<=k-m;++i){
				if(a[i])a[i+m]=1;
			}
			for(int i=k;i>0;--i){
				if(a[i]==0){
					ans=i;
					break;
				}
			}
			if(ans){
				cout << ans << "\n";
			}
			else{
				cout << "good\n";
			}
		}
	}
} 
