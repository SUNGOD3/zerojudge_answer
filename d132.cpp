#include <iostream>
using namespace std;
int ans[1005],n,a[1005],ca;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		if(n==0)break;
		for(int i=0;i<n;++i){
			cin >> ans[i];
		}
		cout << "Game " << ++ca << ":\n";  
		while(1){
			int t=0;
			for(int i=0;i<n;++i){
				cin >> a[i];
				if(a[i])t=1;
			}
			if(t==0)break;
			int used[1005]={0},aa=0,bb=0;
			for(int i=0;i<n;++i){
				if(ans[i]==a[i]){
					used[i]=1;
					a[i]=-1;
					++aa;
				}
			}
			for(int i=0;i<n;++i){
				if(a[i]!=-1){
					for(int j=0;j<n;++j){
						if(used[j]==0&&a[i]==ans[j]){
							used[j]=1;
							++bb;
							j=n;
						}
					}
				}
			}
			cout << "    (" << aa << "," << bb << ")\n";
		}
	}
}
