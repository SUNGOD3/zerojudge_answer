#include <iostream>
using namespace std;
int m[12]={31,28,31,30,31,30,31,31,30,31,30,31},x,y,xt,yt,ct=1;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> x >> y >> xt >> yt;
	while(x!=xt||y!=yt){
		++y;
		++ct;
		if(y>m[x-1]){
			++x;
			y=1;
		}
	}
	cout << ct*100-ct/10*100;
} 
