#include <iostream>
using namespace std;
int a[1001],sc[1001],it,it2;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	while(cin >> n){
		if(n==0)break;
		while(cin >> a[0]){
			if(a[0]==0){
				cout << "\n";
				break;
			}
			for(int i=0;i<n;++i){
				a[i+1]=0;
				sc[i]=0;
			}
			it=0;it2=0;
			for(int i=1;i<n;++i)
				cin >> a[i];
			for(int i=0;i<n;++i){
				sc[it]=i+1;
				++it;
				while(sc[it-1]==a[it2]&&it){
					sc[it]=0;
					a[it2]=0;
					--it;
					++it2;
				}
			}
			if(it2==n)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
	}
} 
