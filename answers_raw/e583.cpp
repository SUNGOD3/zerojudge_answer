#include <iostream>
using namespace std;
int a[10][10];
int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i=0;i<10;++i)
			for(int j=0;j<10;++j)
				a[i][j]=0;
		for(int i=0;i<10;i+=2)
			for(int j=0;j<=i;j+=2)
				cin >> a[i][j];
		for(int i=2;i<10;i+=2)
			for(int j=1;j<i;j+=2)
				a[i][j]=(a[i-2][j-1]-a[i][j-1]-a[i][j+1])/2;
		for(int i=1;i<10;i+=2)
			for(int j=0;j<=i;++j)
				a[i][j]=a[i+1][j]+a[i+1][j+1];
		for(int i=0;i<9;++i){
			for(int j=0;j<=i;++j)
				cout << a[i][j] << " ";
			cout << "\n";
		}
	}
} 
