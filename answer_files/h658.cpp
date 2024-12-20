#include <iostream>
using namespace std;
int x,y,t,xx,yy,ans=1e9,ax,ay;
int main(){
	cin >> x >> y >> t;
	while(t--){
		cin >> xx >> yy;
		if((x-xx)*(x-xx)+(y-yy)*(y-yy)<ans){
			ans=(x-xx)*(x-xx)+(y-yy)*(y-yy);
			ax=xx;
			ay=yy;
		}
	}
	cout << ax << " " << ay;
} 
