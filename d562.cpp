#include <iostream>
#include <string> 

using namespace std;

int main(){
	
	int a=0,tem=0;
	while(cin >> a){
		int b[a];
		for(int i=0;i<a;i++){
			cin >> b[i]; 
			cout << b[i] << " ";
		}
		while(a>0){
			for(int i=0;i<a/2;i++){
				tem=b[i];
				b[i]=b[a-i-1];
				b[a-i-1]=tem;
			}
			cout << endl;
			for(int i=0;i<a-1;i++){
				cout << b[i] << " ";
			}
			a--;
		}
		
	}
	
} 
