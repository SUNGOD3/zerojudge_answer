#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	int n=0;
	while(cin >> n){
		if(n>0){
			int a[n];
			for(int i=0;i<n;i++){
				cin >> a[i];
			}
			sort(a,a+n);
			for(int i=0;i<n;i++){
				if(i!=n-1){
					cout << a[i] << " ";
				}
				else{
					cout << a[i];
				}
			}
			cout << endl;
		}
	}
	
} 
