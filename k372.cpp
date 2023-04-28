#include <iostream>
using namespace std;
int a[8],ansx,ansy;
int main(){
	for(int i=0;i<8;++i)
		cin >> a[i];
	ansx=min(abs(a[4]-a[6]),min(abs(a[0]-a[4])+abs(a[2]-a[6]),abs(a[0]-a[6])+abs(a[2]-a[4])));
	ansy=min(abs(a[5]-a[7]),min(abs(a[1]-a[5])+abs(a[3]-a[7]),abs(a[1]-a[7])+abs(a[3]-a[5])));
	cout << ansx+ansy;
}
