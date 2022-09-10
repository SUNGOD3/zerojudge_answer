#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b;
	while(cin >> a >> b){
		char n;
		int ans[a][b];
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				ans[i][j]=0;
			}
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cin >> n;
				if(n=='*'){
					for(int ii=-1;ii<=1;ii++)
						for(int jj=-1;jj<=1;jj++)
							if(i+ii>=0&&i+ii<a&&j+jj>=0&&j+jj<b)
								ans[i+ii][j+jj]++;
					ans[i][j]-=10;
				}
			}
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(ans[i][j]>=0)
					cout << ans[i][j];
				else
					cout << "*";
			}
			cout << "\n";
		}
	}
} 
