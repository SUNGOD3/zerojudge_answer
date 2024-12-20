#include <iostream>
using namespace std;
long long x,y;
int main(){
	cin.tie(0);cout.tie(0) ;ios::sync_with_stdio(false);
	while(cin >> x >> y){
		if(x==0&&y==0)break;
		x+=5-x%5;
		y+=5-y%5;
		cout << (y-x)/5+1 << "\n"; 
	}
} 
