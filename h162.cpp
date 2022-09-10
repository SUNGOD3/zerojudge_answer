#include <iostream>
using namespace std;
int DP[100005],n,a[100005];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		for(int i=0;i<n;++i){
			cin >> a[i];
			DP[i]=0;
		}
		int it=0;
		for(int i=0;i<n;++i){
			if(it==0||a[i]>=DP[it-1])
				DP[it++]=a[i];
			else
				DP[lower_bound(DP,DP+it,a[i])-DP]=a[i];
		}
		cout << n-it << "\n";
	}
}
