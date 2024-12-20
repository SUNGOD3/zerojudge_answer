#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,k,x,y;
		cin >> n >> m;
		int a[n];
		for(int i=0;i<n;++i)
			cin >> a[i];
		while(m--){
			cin >> k;
			if(k==1){
				cin >> x >> y;
				int maxa=-1000;
				for(int i=x;i<=y;++i)
					if(a[i]>maxa)
						maxa=a[i];
				cout << maxa << "\n";
			}
			else if(k==2){
				cin >> x >> y;
				int p=0;
				for(int i=x;i<=y;++i)
					p+=a[i];
				cout << p/(y-x+1) << "\n";
			}
			else{
				cin >> x;
				cout << a[x] << "\n";
			}
		}
	}
} 
