#include <iostream>
using namespace std;
string x,y;
int xv,yv;
int main(){
	cin >> x >> xv >> y >> yv;
	if(xv>yv){
		cout << x << " WIN!";
	}
	else if(xv<yv){
		cout << y << " WIN!";
	}
	else{
		cout << "tie";
	}
} 
