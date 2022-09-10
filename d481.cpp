#include <iostream>
using namespace std;
long long int a[101][101],b[101][101];
int x,y,xx,yy;
int main() {
	cin.tie(0);cin.sync_with_stdio(0);
	while(cin >> x >> y >> xx >> yy){
		if(y!=xx){
			cout << "Error\n";
			continue;
		}
		for(int i=0;i<x;++i){
			for(int j=0;j<y;++j){
				cin >> a[i][j];
			}
		}
		for(int i=0;i<xx;++i){
			for(int j=0;j<yy;++j){
				cin >> b[i][j];
			}
		}
		for(int i=0;i<x;++i){
			for(int j=0;j<yy;++j){
				long long int tmp=0;
				for(int k=0;k<y;++k){
					tmp+=a[i][k]*b[k][j];
				}
				cout << tmp << " ";
			}
			cout << '\n';
		}
	}
}
