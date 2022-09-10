#include <iostream>
using namespace std;
int ans=0,minn=1000000,mp[101][101],m,n,am,an;
void f(int x,int y){
	ans+=mp[x][y];
	mp[x][y]=-1;
	int minnn=1000000;
	if(x>0&&mp[x-1][y]!=-1){
		minnn=min(mp[x-1][y],minnn);
	}
	if(y>0&&mp[x][y-1]!=-1){
		minnn=min(mp[x][y-1],minnn);
	}
	if(x<m-1&&mp[x+1][y]!=-1){
		minnn=min(mp[x+1][y],minnn);
	}
	if(y<n-1&&mp[x][y+1]!=-1){
		minnn=min(mp[x][y+1],minnn);
	}
	if(x>0&&mp[x-1][y]==minnn){
		f(x-1,y);
		return;
	}
	if(y>0&&mp[x][y-1]==minnn){
		f(x,y-1);
		return;
	}
	if(x<m-1&&mp[x+1][y]==minnn){
		f(x+1,y);
		return;
	}
	if(y<n-1&&mp[x][y+1]==minnn){
		f(x,y+1);
		return;
	}
}
int main(){
	cin >> m >> n;
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			cin >> mp[i][j];
			if(minn>mp[i][j]){
				minn=mp[i][j];
				am=i;
				an=j;
			}
		}
	}
	f(am,an);
	cout << ans ;
} 
