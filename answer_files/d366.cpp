#include <iostream>
#include <cmath>
using namespace std;
long long a,b,n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a >> b;
		long long ans,ma=0;
		for(long long j=a;j<=b;++j){
			long long tmp=j,ba=2,bat=1,trs=1;
			while(tmp!=1&&ba<=sqrt(tmp)){
				while(tmp%ba==0){
					tmp/=ba;
					++bat;
				}
				trs*=bat;
				bat=1;
				++ba;
			}
			if(tmp!=1){
				trs*=2;
			}
			if(trs>ma){
				ans=j;
				ma=trs;
			}
		}
		cout << "Between " << a << " and " << b << ", " << ans << " has a maximum of " << ma << " divisors.\n";  
	}
} 
