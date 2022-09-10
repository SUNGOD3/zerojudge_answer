#include <iostream>

using namespace std;

int main (){
	
	int n=0;
	while(cin >> n){
		
		for(int i=1;i<=n;i++){
			
			for(int k=n-i;k>0;k--){
				cout << '_' ;
			}
			for(int j=1;j<=i;j++){
				cout << '*' ;
			}
			for(int j=2;j<=i;j++){
				cout << '*' ;
			}
			for(int k=n-i;k>0;k--){
				cout << '_' ;
			}
			
			cout << endl;
		}
		
	}
	
	
} 
