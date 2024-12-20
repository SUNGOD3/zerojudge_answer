#include <iostream>
#include <algorithm>
using namespace std;
int a[6][2];
int main() {
	cin.sync_with_stdio(false), cin.tie(nullptr);
	while(cin >> a[0][0] >> a[0][1]){
		int ac=1,ac2=0;
		for(int i=1;i<6;++i){
			cin >> a[i][0] >> a[i][1];
		}
		for(int i=0;i<6;++i){
			if(a[i][0]>a[i][1]){
				swap(a[i][0],a[i][1]);
			}
		}
		for(int i=0;i<6;++i){
			for(int j=i+1;j<6;++j){
				if(a[i][0]<a[j][0]||(a[i][0]==a[j][0]&&a[i][1]<a[j][1])){
					swap(a[i][0],a[j][0]);
					swap(a[i][1],a[j][1]);
				}
			}
		}
		for(int i=0;i<6;i+=2){
			if(a[i][0]!=a[i+1][0]||a[i][1]!=a[i+1][1]){
				ac=0;
			}
		}
		int k[6]={a[0][0],a[0][1],a[2][0],a[2][1],a[4][0],a[4][1]};
		if(k[0]==k[2]){
			if(k[1]==k[4]&&k[3]==k[5]){
				ac2=1;
			}
			else if(k[1]==k[5]&&k[3]==k[4]){
				ac2=1; 
			}
		} 
		if(k[0]==k[3]){
			if(k[1]==k[4]&&k[2]==k[5]){
				ac2=1;
			}
			else if(k[1]==k[5]&&k[2]==k[4]){
				ac2=1; 
			}
		}
		if(k[0]==k[4]){
			if(k[1]==k[2]&&k[3]==k[5]){
				ac2=1;
			}
			else if(k[1]==k[3]&&k[2]==k[5]){
				ac2=1; 
			}
		}
		if(k[0]==k[5]){
			if(k[1]==k[3]&&k[2]==k[4]){
				ac2=1;
			}
			else if(k[1]==k[2]&&k[3]==k[4]){
				ac2=1; 
			}
		}
		if(ac==0||ac2==0){
			cout << "IMPOSSIBLE\n";
		}
		else{
			cout << "POSSIBLE\n";
		}
	}
}

