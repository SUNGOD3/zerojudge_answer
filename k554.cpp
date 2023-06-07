#include <iostream>
using namespace std;
int a[105][105],n,m,x;
int main(){
	cin >> n >> m;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin >> x;
			if(x==1){
				a[i][j]++;
				if(i+1<n)a[i+1][j]++;
				if(i-1>=0)a[i-1][j]++;
				if(j+1<m)a[i][j+1]++;
				if(j-1>=0)a[i][j-1]++;
			}
			else if(x==2){
				a[i][j]++;
				for(int k=1;k<n;++k){
					if(i+k<n)a[i+k][j]++;
					if(i-k>=0)a[i-k][j]++;
				}
				for(int k=1;k<m;++k){
					if(j+k<m)a[i][j+k]++;
					if(j-k>=0)a[i][j-k]++;
				}
			}
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
