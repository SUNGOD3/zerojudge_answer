#include <iostream>
using namespace std;
int m,n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> m >> n){
		int a[n],sum;
		while(m--){
			sum=0;
			for(int i=0;i<n;++i){
				cin >> a[i];
				sum+=a[i];
			}
			if(sum&1)
				cout << "No\n";
			else{
				sum>>=1;
				bool b[sum+1]={1};
				for(int i=0;i<n;++i){
					if(a[i]>sum)break;
					for(int j=sum-a[i];j>=0;--j)
						if(b[j]==1||j==0)
							b[j+a[i]]=1;
				}
				if(b[sum])
					cout << "Yes\n";
				else
					cout << "No\n";
			}
		}
	}
} 
