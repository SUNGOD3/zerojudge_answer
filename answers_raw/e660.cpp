#include <iostream>
using namespace std;
int a[155][2],n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		if(n==0)break;
		for(int i=1;i<=1000;++i){
			for(int j=0;j<n;++j){
				a[j][0]=j-1;
				a[j][1]=j+1;
			}
			a[0][0]=n-1;
			a[n-1][1]=0;
			int it=0,m=n-1;
			while(m--){
				a[a[it][0]][1]=a[it][1];
				a[a[it][1]][0]=a[it][0];
				for(int k=0;k<i;++k){
					it=a[it][1];
				}
			}
			if(it==1){
				cout << i << "\n";
				break;
			}
		}
	}
}
