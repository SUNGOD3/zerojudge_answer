#include <iostream>

using namespace std;

int main(){
	
	int h=0;
	int m=0;
	while (cin >> h >> m){
		h+=2;
		m+=30;
		if(m>59){
			m-=60;
			h++;
		}
		if(h>23){
			h-=24;
		}
		if(h<10){
			cout << 0;
		}
		cout << h << ":";
		if(m<10){
			cout << 0;
		}
		cout << m <<endl;
		
		
	}
	
} 
