#include <iostream>
using namespace std;
int n,a[2001],ans=1000001,tmp,x,y;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a[i];
	}
	for(int i=0;i<n;++i){
		cin >> tmp;
		if(tmp*a[i]<ans){
			ans=tmp*a[i];
			x=a[i];
			y=tmp;
		}
	}
	cout << x << " " << y;
} 
