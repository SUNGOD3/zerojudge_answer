#include <iostream>
#include <algorithm>
using namespace std;
int a[1001],o[1001],e[1001],oit,eit,n;
int main() {
   	cin >> n;
   	for(int i=0;i<n;++i){
   		cin >> a[i];
		if(a[i]%2){
			o[oit]=a[i];
			++oit;
		}	
		else{
			e[eit]=a[i];
			++eit;
		}
	}
	sort(o,o+oit);
	sort(e,e+eit);
	for(int i=0;i<eit;++i){
		cout << e[i] << " ";
	}
	for(int i=oit-1;i>=0;--i){
		cout << o[i] << " ";
	}
}
