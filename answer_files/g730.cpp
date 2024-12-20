#include <iostream>
using namespace std;
int main(){
	int a[8],x,y,ans=0;
	for(int i=0;i<8;++i){
		cin >> a[i];
	}
	cin >> x >> y;
	for(int i=0;i<8;i+=4){
		if(x>min(a[i],a[i+2])&&x<max(a[i],a[i+2])&&y>min(a[i+1],a[i+3])&&y<max(a[i+1],a[i+3]))++ans;
	}
	cout << 2-ans;
}
