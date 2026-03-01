#include <iostream>
using namespace std;
int n,m,k,a[10005],c[202],ac;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m >> k;
	for(int i=0;i<n;++i){
		cin >> a[i];
	}
	for(int i=0;i<n&&ac==0;++i){
		for(int j=0;j<=a[i];++j){
			c[j]++;
			//cout << c[j] << " ";
		}
		//cout << "\n";
		for(int j=0;j<=200-k;++j){
			if(c[j]-c[j+k+1]>=m){
				ac=1;
				break;
			}
		}
		if(ac){
			cout << i+1;
		}
	}
	if(ac==0){
		cout << "Impossible";
	}
} 
