#include <iostream>
using namespace std;
int a[50],n,l,r,ac;
int main(){
	while(cin >> a[n++]);
	for(int i=1;i<n-1;++i){
		if(a[i]>a[i-1]){
			int it=i;
			while(a[i]==a[i+1])++i;
			if(i<n-2&&a[i]>a[i+1]){
				ac=1;
				if(it!=i)
					cout << it+1 << " " << i+1 << " " << a[it] << "\n"; 
				else
					cout << it+1 << " " << a[it] << "\n";
			}
		}
	}
	if(ac==0)cout << "0 0";
}
