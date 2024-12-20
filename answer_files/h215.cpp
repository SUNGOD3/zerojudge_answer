#include <bits/stdc++.h>
using namespace std;
long long ans,n;
int main(){
	cin >> n;
	for(long long i=1;i<=n;++i)
		ans+=i*i;
	cout << ans;
}
