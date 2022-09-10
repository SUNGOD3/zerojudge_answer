#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		int a[n][3],min=10000001,mx,my;
		for(int i=0;i<n;i++){
			cin >> a[i][0] >> a[i][1];
			a[i][2]=0;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				a[i][2]+=abs(a[i][0]-a[j][0])+abs(a[i][1]-a[j][1]);
			}
			if(min>a[i][2]){
				min=a[i][2];
				mx=a[i][0];
				my=a[i][1];
			}
			else if(min==a[i][2]&&a[i][0]<mx){
				mx=a[i][0];
				my=a[i][1];
			}
			else if(min==a[i][2]&&a[i][0]==mx&&a[i][1]<my){
				mx=a[i][0];
				my=a[i][1];
			}
		}
		cout << mx << " " << my << "\n" << min << "\n";
	}
} 
