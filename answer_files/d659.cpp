#include <iostream>

using namespace std;

int main(){
	
	int n=0;
	while(cin >> n){
		int m[3][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<3;j++){
				cin >> m[j][i];
			}
		}
		for(int j=0;j<n;j++){
			if(m[0][j]>=m[1][j]&&m[1][j]>=m[2][j]){
				cout << "Case " << j+1 << ": " << m[1][j] << endl;
			}
			else if(m[0][j]<=m[1][j]&&m[1][j]<=m[2][j]){
				cout << "Case " << j+1 << ": " << m[1][j] << endl;
			}
			else if(m[2][j]>=m[0][j]&&m[1][j]>=m[2][j]){
				cout << "Case " << j+1 << ": " << m[2][j] << endl;
			}
			else if(m[2][j]<=m[0][j]&&m[1][j]<=m[2][j]){
				cout << "Case " << j+1 << ": " << m[2][j] << endl;
			}
			else if(m[0][j]>=m[1][j]&&m[2][j]>=m[0][j]){
				cout << "Case " << j+1 << ": " << m[0][j] << endl;
			}
			else if(m[0][j]<=m[1][j]&&m[2][j]<=m[0][j]){
				cout << "Case " << j+1 << ": " << m[0][j] << endl;
			}
		}
		
		
	}
	
} 
