#include <iostream>
#include <queue>
using namespace std;
int n,m,x,y,z,a[505][505],v;
bool vst[505][505];
queue <pair <int,int>> q;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n >> m >> x >> y >> z;
	--x;
	--y; 
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			cin >> a[i][j];
	v=a[x][y];
	q.push({x,y});
	while(!q.empty()){
		int tx=q.front().first,ty=q.front().second;
		q.pop();
		if(tx<0||ty<0||tx>=n||ty>=m||vst[tx][ty]||a[tx][ty]!=v)continue;
		vst[tx][ty]=1;
		q.push({tx-1,ty});
		q.push({tx+1,ty});
		q.push({tx,ty-1});
		q.push({tx,ty+1});
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(vst[i][j]){
				cout << z << " "; 
			}
			else{
				cout << a[i][j] << " ";
			}
		}
		cout << "\n";
	}
}
