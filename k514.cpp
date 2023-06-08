#include <iostream>
using namespace std;
int a[4],b[4][101],n,x,ans,t;
int main(){
	for(int i=0;i<4;++i){
		cin >> a[i];
		if(a[i]==1)t=i;
	}
	cin >> n;
	for(int i=0;i<4;++i){
		for(int j=0;j<n;++j){
			cin >> x;
			b[i][x]=1;
		}
	} 
	for(int i=1;i<=100;++i){
		if(b[t][i]){
			int c=i,ct=0;
			for(int j=0;j<4;++j){
				if(a[j]*c<=100&&b[j][a[j]*c]){
					++ct;
				}
			}
			if(ct==4){
				for(int j=0;j<4;++j){
					if(a[j]*c<=100&&b[j][a[j]*c]){
						cout << a[j]*c<< " ";
					}
				}
				return 0;
			}
		}
	}
	cout << "-1";
} 
