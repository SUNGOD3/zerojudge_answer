#include <iostream>

using namespace std;

int main (){
	int a=0;
	int m=0;
	while(cin >> a){
		while(a>=12){
			a-=12;
			m+=50;
		}
		while(a>=1){
			a-=1;
			m+=5;
		}
		cout << m << endl;
		a=0;
		m=0;
	}

} 
