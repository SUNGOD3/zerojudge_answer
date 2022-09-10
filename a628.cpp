#include <iostream>
#include <iomanip>
using namespace std;
int ans[20][20];
int main(){
	int a=0,w=1,i=9,j=9,n,k=9;
	ans[i][j]=a;
	while(k--){
		n=w;
		while(n--){
			j++;
			a++;
			ans[i][j]=a;
		}
		n=w;
		while(n--){
			i--;
			a++;
			ans[i][j]=a;
		}
		w++;
		n=w;
		while(n--){
			j--;
			a++;
			ans[i][j]=a;
		}
		n=w;
		while(n--){
			i++;
			a++;
			ans[i][j]=a;
		}
		w++;
	}
	for(int j=0;j<20;j++){
		ans[18][j]=j+342;
	}
	while(cin >> n){
		n/=2;
		for(int x=9-n;x<=9+n;x++){
			for(int y=9-n;y<=9+n;y++){
				cout << setw(4) << ans[x][y] ;
			}
			cout << "\n";
		}
		cout << "\n";
	}
} 
