#include <iostream>
using namespace std;
int n,D,a[105],ans,v,la;
int main(){
	cin >> n >> D;
	for(int i=0;i<n;++i){
		cin >> a[i];
		if(i==0){
			v=a[i];
		}
		else if(v&&a[i]>=v+D){
			ans+=a[i]-v;
			la=a[i];
			v=0;
		}
		else if(v==0&&a[i]<=la-D){
			v=a[i];
		}
	} 
	cout << ans;
} 
