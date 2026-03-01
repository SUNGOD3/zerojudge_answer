#include <iostream>
using namespace std;
long long a,b,n,ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a;
		if(i){
			ans+=max(a,b);
		}
		b=a;
	}
	cout << ans;
} 
