#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	double aR,bR,aG,bG,aB,bB,a,b,c;
	int w,h;
	cin >> aR >> bR >> aG >> bG >> aB >> bB >> w >> h;
	cout << w << " " << h << "\n";
	for(int i(0);i<h;++i){
		for(int j(0);j<w;++j){
			cin >> a >> b >> c;
			a=a*aR+bR;
			b=b*aG+bG;
			c=c*aB+bB;
			if(a<0)a=0;
			if(b<0)b=0;
			if(c<0)c=0;
			if(a>255)a=255;
			if(b>255)b=255;
			if(c>255)c=255;
			cout << round(a) << " " << round(b) << " " << round(c) << " ";
		}
		cout << "\n";
	}
} 
