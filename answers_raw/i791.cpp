#include <iostream>
using namespace std;
int n,k,c,ct[105],ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> k;
	for(int i=0;i<n;++i){
		cin >> c;
		++ct[c];
	}
	for(int i=0;i<=100;++i)
		ans+=ct[i]/k;
	cout << ans;
}
