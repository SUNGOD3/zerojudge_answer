#include <iostream>
#include <algorithm>
using namespace std;
long long int ans[15];
int n,s;
int main() {
	cin.tie(0);cin.sync_with_stdio(0);
	while(cin >> n){
		for(int i=0;i<n;++i)
			cin >> ans[i];
		s=0;
		sort(ans,ans+n);
		do{
			int k=0;
			for(int i=2;i<n;++i)
				if((ans[i-1]+ans[i-2])%ans[i]&&(ans[i-1]*ans[i-2])%ans[i]){
					k=1;
					break;
				}
			if(k==0){
				s=1;
				for(int i=0;i<n;++i)
					cout << ans[i] << " ";
				cout << "\n";
				break;
			}
		}while(next_permutation(ans,ans+n));
		if(s==0)
			cout << "No\n";
	}
}
