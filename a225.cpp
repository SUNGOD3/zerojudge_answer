#include <iostream>

using namespace std;

int main(){
	
	int a=0,tem=0;
	while(cin >> a){
		int b[a];
		for(int i=0;i<a;i++){
			cin >> b[i];
		}
		for(int i=0;i<a;i++){
			for(int j=a-1;j>i;j--){
				if(b[i]%10>b[j]%10){
					tem=b[i];
					b[i]=b[j];
					b[j]=tem;
				}
				else if(b[i]%10==b[j]%10){
					if(b[j]>b[i]){
						tem=b[i];
						b[i]=b[j];
						b[j]=tem;
					}
				}
			}
		}
		for(int i=0;i<a;i++){
			cout << b[i] << " " ; 
		}
		cout << endl;
	}
	
} 
