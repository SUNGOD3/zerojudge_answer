#include <bits/stdc++.h>
using namespace std;
long long ans;
int main(){
	for(long long i=1;i<=1023;++i)
		ans+=i*i;
	cout << ans;
}
