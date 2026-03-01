#include <iostream>
using namespace std;
int a[10001]={0};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int x,y,z,n=0;
	bool t=0;
	while(cin >> x >> y >> z)
		for(int i=x;i<z;i++)
			if(y>a[i])
				a[i]=y;
	for(int i=0;i<=10000;i++){
		if(a[i]!=n){
			if(t==0){
				cout << i << " " << a[i] ;
				t=1;
			}
			else
				cout << " " << i << " " << a[i] ;
			n=a[i];
		}
	}
	cout << "\n";
} 
