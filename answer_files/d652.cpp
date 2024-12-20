#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],ans=0,minn=101,mi;
	for(int i=0;i<n;++i){
		cin >> a[i];
		if(a[i]<minn){
			minn=a[i];
			mi=i;
		}
	}
	for(int i=mi+1;i<n-1;++i)
		ans+=a[mi]*a[i]*a[i+1];
	for(int i=mi-1;i>0;--i)
		ans+=a[mi]*a[i]*a[i-1];
	if(mi!=0&&mi!=n-1)
		ans+=a[0]*a[mi]*a[n-1];
	cout << ans;
} 
