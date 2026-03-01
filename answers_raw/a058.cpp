#include <iostream>

using namespace std;

int main(){
	
	int n=0;
	int b=0;
	int a1=0,a2=0,a3=0;
	
	cin >> n;
		
	for(int i=n;i>0;i--){
		
		cin >> b;
		
		if(b%3==0){
			a1++;
		}
		if(b%3==1){
			a2++;
		}
		if(b%3==2){
			a3++;
		}
	}
		
	cout << a1 << " " << a2 << " " << a3;
} 
