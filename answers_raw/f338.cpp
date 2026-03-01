#include <iostream>
using namespace std;
int main(){
	int x,y,l,r,m,ans=0,a,b,c;
	cin >> x >> y >> l >> r >> m;
	r*=r;
	while(m--){
		cin >> a >> b >> c;
		a-=x;
		b-=y;
		if(c<=l&&a*a+b*b<=r){
			++ans;
		}
	}
	cout << ans;
}
