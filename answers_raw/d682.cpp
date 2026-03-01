#include <iostream>
using namespace std;
int m,n,p,a[10005][2];
int main(){
	while(cin >> m >> n >> p){
		int v,w,ans=0;
		for(int i=0;i<=m;++i){
			a[i][0]=a[i][1]=0;
		}
		for(int i=0;i<n;++i){
			for(int j=0;j<p;++j){
				cin >> v >> w;
				for(int k=0;k<=m-v;++k){
					if(a[k][0]||k==0){
						a[k+v][1]=max(a[k][0]+w,max(a[k+v][0],a[k+v][1]));
						//cout << a[k+v][1] << "\n"; 
					}
				}
			} 
			for(int k=0;k<=m;++k){
				a[k][0]=a[k][1];
			}
		}
		for(int i=m;i>=0;--i){
			ans=max(a[i][0],ans);
		}
		cout << ans << "\n";
	}
} 
