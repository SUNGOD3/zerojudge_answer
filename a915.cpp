#include <iostream>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
	int a,tem;
	while(cin >> a){
		int b[2][a];
		for(int i=0;i<a;i++){
			cin >> b[0][i] >> b[1][i];
		}
		for(int i=0;i<a;i++){
			for(int j=i+1;j<a;j++){
				if(b[0][i]>b[0][j]){
					tem=b[1][i];
					b[1][i]=b[1][j];
					b[1][j]=tem;
					tem=b[0][i];
					b[0][i]=b[0][j];
					b[0][j]=tem;
				}
				else if(b[0][i]==b[0][j]&&b[1][i]>b[1][j]){
					b[0][i]=b[1][i];
					b[1][i]=b[1][j];
					b[1][j]=b[0][i];
					b[0][i]=b[0][j];
				}
			}
		}
		for(int i=0;i<a;i++){
			cout << b[0][i] << " " << b[1][i] << "\n";
		}
	}
} 
