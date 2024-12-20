#include <iostream>
using namespace std;
int a[100005][2],ma[100005],c[100005],n,t;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<=100000;++i){
			c[i]=n;
			a[i][1]=n;
			ma[i]=0;
		}
		int it=0,ans=0;
		for(int i=0;i<n;++i){
			cin >> a[i][0];
			if(c[a[i][0]]!=n){
				a[c[a[i][0]]][1]=i;
			}
			c[a[i][0]]=i;
		}
		for(int i=0;i<n;++i){
			ma[a[i][1]]++;
		}
		int tmp=0;
		while(it<n){
			for(int i=it;i<=n;++i){
				if(ma[i]){
					tmp=i;
					break;	
				}
			}
			if(tmp<n){
				++ans;
				for(int i=it;i<tmp;++i){
					ma[a[i][1]]--;
				}
			}
			it=tmp;
		}
		cout << ans << "\n";
	}
} 
