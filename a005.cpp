#include <iostream>

using namespace std;

int main (){
	
	int a;
	int b=0,c=0,d=0,e=0;
	
	cin >> a;
	
	while(cin >> b >> c >> d >> e){
	
		if(e/d==d/c&&e%d==0){
			cout << b << " " << c << " " << d << " " << e << " " << e*(d/c) <<endl;
		}
		else if((e-d)==(d-c)){
			cout << b << " " << c << " " << d << " " << e << " " << e+(d-c) <<endl;
		}
		
	}
		
}
	
