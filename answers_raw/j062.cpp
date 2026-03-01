#include <iostream> 
using namespace std;
int n,a[11][11],b[11],ca;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	for(;cin >> n;){
		if(n==0)return 0;
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j)
				cin >> a[i][j];
		cout << "Case " << ++ca << ":";
		for(int i=0;i<n/2+n%2;++i){
			b[i]=b[i+1]=0;
			for(int j=i;j<n-i;++j)
				for(int k=i;k<n-i;++k)
					b[i]+=a[j][k];
		}
		int sum=0;
		for(int i=n/2-1+n%2;i>=0;--i){
			sum+=b[i+1];
			b[i]-=sum;
		}
		for(int i=0;i<n/2+n%2;++i)
			cout << " " << b[i];
		cout << "\n";
	}
}
