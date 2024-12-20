#include <iostream>
using namespace std;
int n,a[1005],x,m;
int main(){
	cin >> n;
	for(int i=1;i<=n;++i){
		cin >> a[i];
	}
	for(int i=1;i<=n;++i){
		cin >> x;
		if(a[i]>x){
			cout << i << " ";
		}
		else{
			a[m++]=i;
		}
	}
	if(m==n)cout << "-1\n";
	else cout << "\n";
	for(int i=0;i<m;++i){
		cout << a[i] << " ";
	}
	if(m==0)cout << "-1";
}
