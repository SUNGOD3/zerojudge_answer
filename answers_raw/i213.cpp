#include <iostream>
using namespace std;
int a[100005],n,is,sz,k;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> is;
		if(is==1){
			cin >> k;
			a[sz++]=k;
		}
		else if(is==2){
			if(sz){
				cout << a[sz-1] << "\n";
			}
			else{
				cout << "-1\n";
			}
		}
		else{
			if(sz){
				--sz;
			}
		}
	}

} 
