#include <iostream>
using namespace std;
int main(){
	int m,n;
	while(cin >> m >> n){
		int a[m][n],b[m]={},sum=0;
		bool c=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
				if(a[i][j]>b[i])
					b[i]=a[i][j];
			}
			sum+=b[i];
		}
		cout << sum << '\n';
		for(int i=0;i<m;i++){
			if(sum%b[i]==0){
				cout << b[i] << " ";
				c=1;
			}
		}
		if(c==0)
			cout << "-1\n";
		else
			cout << "\n";
	}
}
