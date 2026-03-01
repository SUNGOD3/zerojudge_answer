#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	char a;
	while(cin >> n){
		bool b[n][n];
		bool ans[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				b[i][j]=0;
				ans[i][j]=0;
				cin >> a;
				if(a=='*'){
					b[i][j]=1;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(b[i][j]==1){
					for(int ii=0;ii<n;ii++){
						ans[i][ii]=1;
						ans[ii][j]=1;
					}
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(ans[i][j]==1){
					cout << '*';
				}
				else{
					cout << '0';
				}
			}
			cout << "\n";
		}
	}
} 
