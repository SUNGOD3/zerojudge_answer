#include <iostream>
using namespace std;
int n,i,j,ma[505];
bool a[505][25005];
int main(){
	cin.tie(0);cout.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	for(i=0;i<n;++i){
		a[n/2][i]=1;
		ma[n/2]=max(ma[n/2],i);
	}
	for(i=n/2,j=n-1;i<n;++i,++j){
		a[i][j]=1;
		ma[i]=max(ma[i],j);
	}
	for(i=n-1,--j;i>=0;--i,++j){
		a[i][j]=1;
		ma[i]=max(ma[i],j);
	}
	for(i=0,--j;i<n*2;++i,++j){
		a[0][j]=1;
		ma[0]=max(ma[0],j);
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<=ma[i];++j){
			if(a[i][j]){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
		cout << "\n";
	}
}
