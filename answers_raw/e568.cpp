#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int ca=1;ca<=n;++ca){
		int a[8],ans[10001]={0},x=0,y=0,z=0;
		for(int i=0;i<8;++i){
			cin >> a[i];
		}
		for(int i=a[0];i<a[2];++i){
			for(int j=a[1];j<a[3];++j){
				++ans[i+j*100];
			} 
		}
		for(int i=a[4];i<a[6];++i){
			for(int j=a[5];j<a[7];++j){
				++ans[i+j*100];
			} 
		}
		for(int i=0;i<10000;++i){
			if(ans[i]==2){
				++x;
			}
			else if(ans[i]==1){
				++y;
			}
			else{
				++z;
			}
		}
		cout << "Night " << ca << ": " << x << " " << y << " " << z << "\n"; 
	}
} 
