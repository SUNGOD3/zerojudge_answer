#include <iostream>

using namespace std;

int main(){
	
	int a[30000];
	int b=0,c=0,max=0;
	while(cin >> b){
		for(int i=0;i<30000;i++){
			a[i]=0;
		}
		for(int i=0;i<b;i++){
			cin >> c;
			a[c]++;
		}
		for(int i=0;i<30000;i++){
			if(a[i]>max){
				max=a[i];
			}
		}
		for(int i=0;i<30000;i++){
			if(a[i]==max){
				cout << i << " " << max << endl;
			}
		}
	}
	
} 
