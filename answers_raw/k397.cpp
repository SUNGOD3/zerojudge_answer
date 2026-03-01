#include <iostream>
using namespace std;
int n,m,a[105][2],b[105][2],x;
int main(){
	cin >> n >> m;
	for(int i=0;i<n;++i){
		cin >> a[i][0] >> a[i][1];
	} 
	for(int i=0;i<m;++i){
		cin >> b[i][0] >> b[i][1];
	}
	cin >> x;
	for(int i=0,j=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(min(a[i][1],b[j][1])-max(a[i][0],b[j][0])>=x){
				cout << max(a[i][0],b[j][0]) << " " << max(a[i][0],b[j][0])+x;
				return 0;
			}
		}
	}
	cout << "-1";
}
