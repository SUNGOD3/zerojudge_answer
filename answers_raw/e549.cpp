#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,a[6],b[4];
	while(cin >> n){
		if(n==0)break;
		for(int i=0;i<n;++i){
			for(int j=0;j<4;++j){
				cin >> b[j];
			}
			for(int j=0;j<3;++j){
				if(i){
					a[j*2]=max(a[j*2],b[j]);
					a[j*2+1]=min(a[j*2+1],b[j]+b[3]);
				}
				else{
					a[j*2]=b[j];
					a[j*2+1]=b[j]+b[3];
				}
			}
		}
		int k=1;
		for(int i=0;i<3;++i){
			k*=(a[i*2+1]-a[i*2]);
		}
		cout << max(0,k) << "\n";
	}
} 
