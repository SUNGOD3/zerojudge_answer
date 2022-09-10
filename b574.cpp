#include <iostream>
using namespace std;
int k,n,m,ans,tmp;
int main(){
	cin >> k;
	while(k--){
		cin >> n >> m;
		if(m)++tmp;
		else --tmp;
		ans=max(tmp,ans);
	}
	cout << ans;
} 
