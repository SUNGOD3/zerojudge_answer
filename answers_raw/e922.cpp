#include <iostream>
using namespace std;
int m=1,d=4;
int main(){
	for(int i=0;i<8;++i){
		cout << m << "/" << d << "\n";
		d+=7;
		if(d>30){
			d-=31;
			++m;
		}
	}
} 
