#include <iostream>
using namespace std;
int x,y,ma,mi=1e9,n,lx,ly;
int main(){
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> x >> y;
		if(i){
			ma=max(ma,abs(x-lx)+abs(y-ly));
			mi=min(mi,abs(x-lx)+abs(y-ly));
		}
		lx=x;
		ly=y;
	}
	cout << ma << " " << mi;
} 
