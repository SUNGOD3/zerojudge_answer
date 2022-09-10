#include <iostream>
using namespace std;
int main(){
	int x1,x2,x3,y1,y2,y3;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3){
		int ab=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		int ac=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
		int bc=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
		if(ab>ac&&ab>bc)
			cout << x1+x2-x3 << " " << y1+y2-y3 << endl;
		else if(ac>ab&&ac>bc)
			cout << x1+x3-x2 << " " << y1+y3-y2 << endl;
		else
			cout << x2+x3-x1 << " " << y2+y3-y1 << endl;
	}
} 
