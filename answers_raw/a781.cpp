#include <iostream>
using namespace std;
int main(){
	int a;
	while(cin >> a){
		for(int i=0;i<8;i++){
			for(int k=0;k<a;k++){
				if(i%2==0){
					for(int j=0;j<8;j++){
						if(j%2==0){
							for(int ii=0;ii<a;ii++){
								cout << '#';
							}
						}
						else{
							for(int ii=0;ii<a;ii++){
								cout << '.';
							}
						}
					}
					cout << "\n";
				}
				else{
					for(int j=0;j<8;j++){
						if(j%2==0){
							for(int ii=0;ii<a;ii++){
								cout << '.';
							}
						}
						else{
							for(int ii=0;ii<a;ii++){
								cout << '#';
							}
						}
					}
					cout << "\n";
				}
			}
		}
	}
} 
