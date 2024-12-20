#include <iostream>
using namespace std;
int n,a[105][2],x,y,sx,sy,ansx=-1,ansy=-1;
int main(){
	cin >> n;
	for(int j=0;j<2;++j)
		for(int i=1;i<=n;++i)
			cin >> a[i][j];
	cin >> x >> y;
	for(int i=1;i<=n;++i){
		sx+=a[i][0];
		if(sx>=x){
			ansx=i;
			break;
		}
	}
	for(int i=1;i<=n;++i){
		sy+=a[i][1];
		if(sy>=y){
			ansy=i;
			break;
		}
	}
	if(ansx==-1||ansy==-1){
		cout << "-1";
		return 0;
	}
	else{
		cout << max(ansx+1,ansy+1);
	}
} 
