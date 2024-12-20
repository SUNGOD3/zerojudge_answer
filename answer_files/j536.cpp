#include <iostream>
using namespace std;
int n,a,arr[505],ma,mit,sum;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n >> a;
	a/=2;
	for(int i=0;i<n;++i){
		cin >> arr[i];
		if(arr[i]>ma){
			ma=arr[i];
			mit=i;
		}
	}
	for(int i=max(0,mit-a-max(0,-(n-mit-1-a)));i<mit;++i){
		arr[mit]+=arr[i];
		arr[i]=0;
	}
	for(int i=mit+1;i<=min(n-1,mit+a+max(0,-(mit-a)));++i){
		arr[mit]+=arr[i];
		arr[i]=0;
	}
	for(int i=0;i<n;++i){
		if(i!=mit){
			sum+=arr[i];
		}
	}
	cout << arr[mit] << " " << sum;
}
