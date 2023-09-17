#include <iostream>
using namespace std;
int x,y;
int main(){
	while(cin >> x >> y){
		cout << "[" << x/y << ";"; 
		x%=y;//5 19
		while(x){
			swap(x,y);//19 5
			int tmp=x/y;
			cout << tmp ;
			x=x%y;
			if(x)cout << ",";
		}
		cout << "]\n";
	}
	return 0;
} 
