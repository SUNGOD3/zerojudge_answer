#include <iostream> 
using namespace std;
int n,m,a[1000001],k;
bool b[1000001];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=1;i<=n;++i)
		a[i]=i+1;
	a[n]=-1;
	for(int i=0;i<m;++i){
		cin >> k;
		if(b[k]==1||k<1||k>n||b[a[k]]==1||a[k]==-1)
			cout << "0u0 ...... ?\n";
		else{
			cout << a[k] << "\n";
			b[a[k]]=1;
			a[k]=a[a[k]];
		}
	}
}
