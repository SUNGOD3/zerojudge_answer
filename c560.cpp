#include <iostream>
using namespace std;
long long int n,m,a[100050]={1},k;
bool b[100050];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<m;++i){
		cin >> k;
		b[k]=1;
	}
	for(int i=0;i<=n;++i){
		a[i]%=1000000007;
		a[i+1]+=a[i];
		if(b[i+1]==0&&b[i+2]==0)
			a[i+3]+=a[i];
	}
	cout << a[n];
} 
