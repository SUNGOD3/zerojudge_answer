#include <iostream>
using namespace std;
long long int k,m,n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int ca=1;ca<=n;++ca){
		cin >> m >> k;
		long long int e = m/k , f = m/k+m%k;
		cout << "Case " << ca << " :\n"; 
		for(int i=1;i<k;++i)
			cout << "第" << i << "位 : 拿" << e << "元並說DD! BAD!\n";
		cout << "第" << k << "位 : 拿" << f << "元並說DD! BAD!\n";
	}
}
