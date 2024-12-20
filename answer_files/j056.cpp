#include <iostream>
using namespace std;
int n,x,y;
char c;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	while(n--){
		cin >> x >> c >> y;
		if(x==12)x=0;
		int v=720-(x*60+y);
		if(v<60)v+=720;
		cout << v/600 << v/60%10 << ":" << v%60/10 << v%60%10 << "\n";
	}
}
