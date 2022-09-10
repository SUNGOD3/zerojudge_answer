#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,a,b;
	cin >> n;
	double p,ans;
	while(n--){
		cin >> a >> p >> b;
		ans=0;
		double op=1,tmp=1-p,dp=1;
		for(int i=0;i<a;++i)
			dp*=tmp;
		for(int i=1;i<b;++i)
			op*=tmp;
		for(int k=0;k<=100000;++k){
			ans+=p*(op);
			op*=dp;
			if(op<=0.000001)break;
		}
		cout << fixed  <<  setprecision(4) << ans << "\n";
	}
} 
