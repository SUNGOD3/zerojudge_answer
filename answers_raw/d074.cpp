#include <iostream>

using namespace std;

int main (){
	
	int n;
	int x;
	int max;
	while(cin >> n){
		for(int i=1;i<=n;i++){
			cin >> x;
			if(x>=max){
				max=x;
			}
		}
		cout << max << endl; 
	}
	
} 
