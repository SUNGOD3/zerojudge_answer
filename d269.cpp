#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int n,t;
double arr[10001];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;++i){
			cin >> arr[i];
		}
		double ans=0;
		sort(arr,arr+n);
		for(int i=n-1;i>=2;--i){
			if(arr[i]<arr[i-1]+arr[i-2]){ 
				double s=(arr[i]+arr[i-1]+arr[i-2])/2.00;
				ans=max(ans,sqrt(s*(s-arr[i])*(s-arr[i-1])*(s-arr[i-2])));
			}
		}
		cout << fixed << setprecision(2) << ans << '\n';
	}
} 
