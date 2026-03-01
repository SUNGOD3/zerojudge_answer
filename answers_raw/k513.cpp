#include <iostream>
using namespace std;
int a[3],b[3],n,x,ans;
int main(){
	for(int i=0;i<3;++i){
		cin >> a[i];
	}
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> x;
		if(x<200)++b[0];
		else if(x>=500)++b[2];
		else ++b[1];
	} 
	for(int i=0;i<3;++i){
		for(int j=i;j<3;++j){
			if(b[i]>=a[j]){
				ans+=a[j];
				b[i]-=a[j];
				a[j]=0;
			}
			else{
				ans+=b[i];
				a[j]-=b[i];
				b[i]=0;
			}
		}
	}
	cout << ans;
} 
