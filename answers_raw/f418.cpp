#include <iostream>
using namespace std;
int h,w,x1,y1,x2,y2;
char a[101][101];
int main(){
	cin >> h >> w >> x1 >> y1 >> x2 >> y2;
	for(int i=1;i<=h;++i)
		for(int j=1;j<=w;++j)
			cin >> a[i][j];
	if(x1-x2==y1-y2)
		for(int i=x1,j=y1;i<=x2;++i,++j)
			cout << a[i][j];
	else if(x1==x2)
		for(int i=y1;i<=y2;++i)
			cout << a[x1][i];
	else if(y1==y2)
		for(int i=x1;i<=x2;++i)
			cout << a[i][y1];
	else
		for(int i=x1,j=y1;i<=x2;++i,--j)
			cout << a[i][j];
} 
