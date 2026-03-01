#include <iostream>
using namespace std;
int n;
int main(){
	while(cin >> n){
		if(n==0)break;
		int ans=0;
		for(int i=1;i<n;++i){
			for(int j=i+1;j<n;++j){
				int k=(i+j)*(j-i+1)/2;
				if(k==n)
					++ans;
				else if(k>n)break;
			}
		}
		cout << ans << "\n";
	}
} 
