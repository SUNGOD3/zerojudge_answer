#include <iostream>
using namespace std;
long long x,y,n,ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> x >> y;
		for(int j=0;j<32;++j){
			if(x%2==0&&y%2){
				++ans;
			}
			x>>=1;
			y>>=1;
		}
	}
	cout << ans;
} 
