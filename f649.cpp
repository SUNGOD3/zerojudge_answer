#include <iostream>
#include <cmath>
using namespace std;
long long x,y;
int main(){
	cout.tie(0);
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> x >> y){
		if(x<=1||y<=0)cout << "1\n";
		else cout << floor(log10(log10(x)*y+1)+1) << "\n";
	}
}
