#include <iostream>
using namespace std;
int BIT[1001][1001],MAX_N=1000;
int lowerbit(int x){
	return (x)&(-x);
}
int edit(int x,int y){
	for(int i=x;i<=MAX_N;i+=lowerbit(i))
		for(int j=y;j<=MAX_N;j+=lowerbit(j))
			++BIT[i][j];
}
int sum(int x,int y){
	int rt=0;
	for(int i=x;i>0;i-=lowerbit(i))
		for(int j=y;j>0;j-=lowerbit(j))
			rt+=BIT[i][j];
	return rt;
}
int main(){
	cin.tie(0);ios::sync_with_stdio(0);
	int n;
	while(cin >> n){
		for(int i=0;i<1001;++i)
			for(int j=0;j<1001;++j)
				BIT[i][j]=0;
		int a[n][2];
		for(int i=0;i<n;++i){
			cin >> a[i][0] >> a[i][1];
			edit(a[i][0],a[i][1]);
		}
		for(int i=0;i<n;++i)
			cout << sum(a[i][0]-1,a[i][1]-1) << "\n";
	}
}
 
