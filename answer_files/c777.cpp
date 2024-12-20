#include <iostream>
using namespace std;
//1000000000000000000
//152074750075811746
int main(){
	long long int a[1000]={},a1=0,a2=1,a3=2,t=0,x,y;
	a[0]=0;
	a[1]=1;
	a[2]=2;
	for(long long int i=3;i<70;i++){
		t=a1+a2+a3;
		a1=a2;
		a2=a3;
		a3=t;
		a[i]=t;
	}
	while(cin >> x >> y){
		int ans=0;
		for(int i=0;i<70;i++){
			if((a[i]<=y&&a[i]>=x)||(a[i]>=y&&a[i]<=x))
			 ans++;
		}
		cout << ans << endl;
	}
} 
