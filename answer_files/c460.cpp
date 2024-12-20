#include <iostream>
using namespace std;
long long a[3][8],n,x,y,z,v,ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> v >> x >> y >> z;
		a[v-1][x+y*2+z*4]++;
	}
	for(int i=0;i<8;++i){
		if(a[0][i]==0)continue;
		for(int j=0;j<8;++j){
			if(a[1][j]==0)continue;
			for(int k=0;k<8;++k){
				if(a[2][k]==0)continue;
				if((i|j|k)==7){
					ans+=a[0][i]*a[1][j]*a[2][k];
				}
			}
		}
	}
	cout << ans;
} 
