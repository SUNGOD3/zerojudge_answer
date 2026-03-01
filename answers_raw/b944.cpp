#include <iostream>
using namespace std;
int a[25][2],n,b,t;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	while(cin >> b >> t){
		for(int i=1;i<=n;++i){
			if(a[i][0]){
				a[i][1]--;
				if(a[i][1]<=0){
					a[i][0]=a[i][1]=0;
				}
			}
		}
		int ac=1;
		for(int i=1;i<=n&&ac;++i){
			if(a[i][0]==0&&a[i-1][0]==0&&a[i+1][0]==0){
				ac=0;
				a[i][0]=b;
				a[i][1]=t;
			}
		}
		for(int i=1;i<=n&&ac;++i){
			if(a[i][0]==0){
				ac=0;
				a[i][0]=b;
				a[i][1]=t;
			}
		}
		if(ac){
			cout << "  Not enough\n";
		}
		cout << "Number: ";
		for(int i=1;i<=n;++i){
			cout << a[i][0] << " ";
		}
		cout << "\n  Time: ";
		for(int i=1;i<=n;++i){
			cout << a[i][1] << " ";
		}
		cout << "\n";
	}
	
}
