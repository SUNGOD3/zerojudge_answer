#include <iostream>
using namespace std;
int a[500],b[500],n,m;
int main(){
	cin >> n >> m;
	for(int i=0;i<n;++i)
		cin >> a[i];
	for(int i=0;i<m;++i){
		int it=0;
		for(int j=0;j<n;j+=2)
			b[j]=a[it++];
		for(int j=1;j<n;j+=2)
			b[j]=a[it++];
		for(int j=0;j<n;++j)
			a[j]=b[j];
	}
	for(int i=0;i<n;++i)
		cout << a[i] << " ";
} 
