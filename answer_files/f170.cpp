#include <iostream>
#include <cmath>
#include <queue>
using namespace std;
int a[1001][1001],x,y,ans;
bool used[1001][1001];
queue < pair<int,int> > q;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	cin >> n;
	cin >> x >> y;
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin >> a[i][j];
		}
	}
	pair<int,int> p(x,y);
	used[x][y]=1;
	ans=1;
	q.push(p);
	while(q.empty()==0){
		pair<int,int> tmp = q.front();
		q.pop();
		x = tmp.first;
		y = tmp.second;
		//cout << x << " " << y << " " << a[x][y] << "\n";
		int d = a[x][y];
		if(x>0&&used[x-1][y]==0&&abs(a[x-1][y]-d)<3){
			++ans;
			pair<int,int> tmp2(x-1,y);
			used[x-1][y]=1;
			q.push(tmp2);
		}
		if(x<n-1&&used[x+1][y]==0&&abs(a[x+1][y]-d)<3){
			++ans;
			pair<int,int> tmp2(x+1,y);
			used[x+1][y]=1;
			q.push(tmp2);
		}
		if(y>0&&used[x][y-1]==0&&abs(a[x][y-1]-d)<3){
			++ans;
			pair<int,int> tmp2(x,y-1);
			used[x][y-1]=1;
			q.push(tmp2);
		}
		if(y<n-1&&used[x][y+1]==0&&abs(a[x][y+1]-d)<3){
			++ans;
			pair<int,int> tmp2(x,y+1);
			used[x][y+1]=1;
			q.push(tmp2);
		}
	}
	cout << ans;
}
