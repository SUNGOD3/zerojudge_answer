#include <iostream>
using namespace std;
int n,m,a[10001],b[10001],x,sa,sb;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	for(int i=0;i<n*2+1;++i){
		cin >> x;
		while(x--)
			a[sa++]=i%2;
	}
	cin >> m;
	for(int i=0;i<m*2-1;++i){
		cin >> x;
		while(x--)
			b[sb++]=(i+1)%2; 
	}
	for(int i=0;i<=sa-sb;++i){
		bool ok=1;
		for(int j=0;j<sb;++j)
			if(a[i+j]+b[j]>1){
				ok=0;
				break;
			}
		if(ok){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
} 
