#include <iostream>
using namespace std;
int main(){
	int x,y;
	while(cin >> x >> y){
		x=2*x-1;
		char a[y][x];
		for(int i=0;i<y;i++)
			for(int j=0;j<x;j++)
				cin >> a[i][j];
		for(int i=0;i<x;i+=2){
			int ans=i;
			for(int j=0;j<y;j++){
				if(ans+1<x&&a[j][ans+1]=='-')
					ans+=2;
				else if(ans-1>=0&&a[j][ans-1]=='-')
					ans-=2;
			}
			cout << ans/2+1 << " ";
		}
		cout << "\n";
	}
} 
