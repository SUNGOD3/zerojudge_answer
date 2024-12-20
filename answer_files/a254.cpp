#include <iostream>
#include <cmath>
using namespace std;
long long int a[201],b[201],n;
bool used[201];
int GCD(int a, int b) {
	int buffer;
	while (b)
		buffer = a, a = b, b = buffer % b;
	return a;
}
int main(){
	cin.sync_with_stdio(false); cin.tie(0);
	while(cin >> n){
		for(int i=0;i<n;++i){
			cin >> a[i];
			b[i]=a[i]*a[i];
			used[i]=0;
		}
		int ans=0;
		for(int i=0;i<n;++i){
			for(int j=i+1;j<n;++j){
				if(used[i]==0&&used[j]==0&&GCD(a[i],a[j])==1){
					long long int buffer=b[i]+b[j],sb=sqrt(buffer);
					if ((sb * sb) == buffer){
						++ans;
						used[i]=used[j]=1;
					}
				}
			}
		}
		cout << ans << "\n";
	}
} 
