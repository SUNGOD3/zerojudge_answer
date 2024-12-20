#include <iostream>
using namespace std;
int a[35][2],n,d;
int main(){
	while(cin >> a[n][0]){
		if(a[n][0]==0)break;
		++n;
	}
	cin >> d;
	while(d){
		--d;
		for(int i=0;i<n;++i){
			a[i][1]=a[i][0];
		}
		for(int i=0;i<n;++i){
			if(i==0){
				if(a[i][0]>a[i+1][0]){
					a[i+1][1]+=a[i][0]*0.1;
				}
			}
			else if(i==n-1){
				if(a[i][0]>a[i-1][0]){
					a[i-1][1]+=a[i][0]*0.1;
				}
			}
			else{
				if(a[i][0]>a[i+1][0]){
					a[i+1][1]+=a[i][0]*0.05;
				}
				if(a[i][0]>a[i-1][0]){
					a[i-1][1]+=a[i][0]*0.05;
				}
			} 
		}
		for(int i=0;i<n;++i){
			a[i][0]=a[i][1];
		}
	}
	for(int i=0;i<n;++i){
		cout << a[i][0] << " ";
	}
} 
