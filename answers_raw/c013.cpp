#include <iostream>

using namespace std;

int main(){
	int n=0;
	int a=0;
	int f=0;
	while(cin >> n){
		for(int i=1;i<=n;i++){
			cin >> a >> f;
			for(int j=1;j<=f;j++){
				for(int k=1;k<=a;k++){
					for(int l=1;l<=k;l++){
						cout << k;
					}
					cout << endl;
				}
				for(int k=a-1;k>0;k--){
					for(int l=k;l>0;l--){
						cout << k;
					}
					cout << endl;
				}
				if(i!=n||f!=j){
					cout << endl;
				}
			}
		}
	}
	
	
} 
