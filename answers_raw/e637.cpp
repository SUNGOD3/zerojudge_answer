#include <iostream>
using namespace std;
int main(){
	int m,n,t;
	while(cin >> m >> n >> t){
		int a[t+1]={0};
		a[0]=1;
		for(int i=0,tm=t-m;i<=tm;++i){
			if(a[i]){
				int im=i+m;
				a[im]=max(a[i]+1,a[im]);
			}
		}
		for(int i=0,tn=t-n;i<=tn;++i){
			if(a[i]){
				int in=i+n;
				a[in]=max(a[i]+1,a[in]);
			}
		}
		if(a[t]){
			cout << a[t]-1 << "\n";
		}
		else{
			for(int i=t-1;i>=0;--i)
				if(a[i]){
					cout << a[i]-1 << " " << t-i << "\n";
					break;
				}
		}
	}
} 
