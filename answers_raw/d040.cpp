#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	while(cin >> n){
		if(n==0)break;
		float a[n][3],ans=0;
		for(int i=0;i<n;++i){
			cin >> a[i][0] >> a[i][1];
			if(a[i][0]>a[i][1]){
				float tmp=a[i][0];
				a[i][0]=a[i][1];
				a[i][1]=tmp;
			}
			if(a[i][1]>=a[i][0]*4)
				a[i][2]=a[i][0];
			else if(a[i][1]>=a[i][0]*2)
				a[i][2]=a[i][1]/4;
			else
				a[i][2]=a[i][0]/2;
			ans=max(ans,a[i][2]);
		}
		for(int i=0;i<n;++i){
			if(ans==a[i][2]){
				cout << i+1 << "\n";
				break; 
			}
		}
	}
} 
