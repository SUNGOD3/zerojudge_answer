#include <iostream>
using namespace std;
int m,x,ma=-1,mi=-1,l,up,d;
int main(){
	cin >> m >> m;
	for(up=1;cin >> l;++up){
		up%=1001;
		d=1;
		for(d%m==1;d%m!=0;++d){
			cin >> x;
			if(x>l){
				up+=(x-l)*1001;
			}
			else{
				d+=(l-x)*m;
			}
			l=x;
		}
		d/=m;
		if(up>ma+1000)
			ma=up;
		if(d*1001>mi)
			mi=d*1001+up%1001;
	}
	cout << ma%1001 << "\n" << mi%1001;
}
