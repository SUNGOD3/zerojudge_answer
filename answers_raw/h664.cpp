#include <iostream>
using namespace std;
int a[16]={0,1},t,n,m;
int fd(int x,int y){
	if(x==1)return 1;
	int x2=(1<<(x-1));
	if(y==x2)return x;
	else if(y>x2){
		return fd(x-1,y-x2);
	}
	else{
		return fd(x-1,y);
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	for(int i=2;i<=15;++i)
		a[i]=a[i-1]*2+1;
	cin >> t;
	while(t--){
		cin >> n >> m;
		cout << fd(n,m) << "\n";
	}
} 
