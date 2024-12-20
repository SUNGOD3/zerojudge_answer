#include <iostream>

using namespace std;

int main(){
	
	int a[10];
	int b=0,c=0;
	for(int i=0;i<10;i++){
		cin >> a[i];
	}
	cin >> b;
	b+=30;
	for(int i=0;i<10;i++){
		if(b>=a[i]){
			c++;
		}
	}
	cout << c << endl;
	return 0; 
} 
