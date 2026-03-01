#include <iostream>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	int a;
	while(cin >> a){
		int b[a][a]={};
		int k=1;
		for(int i=0;i<a;i++){
			if(i%2==1){
				for(int j=0,y=i;j<=i;j++){
					b[j][y]=k;
					k++;
					y--;
				}
			}
			else{
				for(int j=0,y=i;j<=i;j++){
					b[y][j]=k;
					k++;
					y--;
				}
			}
		}
		if(a%2==0){
			for(int i=0;i<a-1;i++){
				if(i%2==1){
					for(int j=a-1,y=i+1;j>=i+1;j--){
						b[y][j]=k;
						k++;
						y++;
					}
				}
				else{
					for(int j=a-1,y=i+1;j>=i+1;j--){
						b[j][y]=k;
						k++;
						y++;
					}
				}
			}
		}
		else{
			for(int i=0;i<a-1;i++){
				if(i%2==0){
					for(int j=a-1,y=i+1;j>=i+1;j--){
						b[y][j]=k;
						k++;
						y++;
					}
				}
				else{
					for(int j=a-1,y=i+1;j>=i+1;j--){
						b[j][y]=k;
						k++;
						y++;
					}
				}
			}
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<a;j++){
				cout << b[i][j] << " ";
			}
			cout << endl;
		}
	}
} 
