#include <iostream>
using namespace std;
long long t,x,y;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> t;
	while(t--){
		cin >> x >> y;
		if(y==0){
			cout << "?(��?��*)?\n";//�Хh�ۤv�ƻs 
		}
		else if(y>x){
			cout << x+y << '\n'; 
		}
		else{
			cout << y*2-1 << '\n';
		}
	}
} 
