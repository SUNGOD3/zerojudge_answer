#include <iostream>
using namespace std;
int n,q,is,x1,y1,x2,y2,va;
int a[251][251],BIT[251][251];
int lowerbit(int x){
	return x&(-x);
}
int update(int x,int y,int v){
	for(int i=x;i<=n;i+=lowerbit(i))
		for(int j=y;j<=n;j+=lowerbit(j))
			BIT[i][j]+=v;
}
int sum(int x,int y){
	int rt=0;
	for(int i=x;i>0;i-=lowerbit(i))
		for(int j=y;j>0;j-=lowerbit(j))
			rt+=BIT[i][j];
	return rt;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> q; 
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j){
			cin >> a[i][j];
			update(i,j,a[i][j]);
		}
	while(q--){
		cin >> is;
		if(is==1){
			cin >> x1 >> y1 >> x2 >> y2;
			int tmpx=max(x1,x2),tmpy=max(y1,y2);
			x1=min(x1,x2);
			y1=min(y1,y2);
			x2=tmpx;
			y2=tmpy;
			cout << sum(x2,y2) - sum(x1-1,y2) - sum(x2,y1-1) + sum(x1-1,y1-1)  << "\n";
		}
		else{
			cin >> x1 >> y1 >> va;
			update(x1,y1,va-a[x1][y1]);
			a[x1][y1]=va;
		} 
	}
} 
