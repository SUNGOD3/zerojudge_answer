#include <iostream>
using namespace std;
int x,y,ans[21][21],maxa,ax,ay;
char mp[21][21];
void fd(int xi,int yi,int time){
	if(xi<0||yi<0||xi>=x||yi>=y||mp[xi][yi]=='#'||(ans[xi][yi]!=0&&time>=ans[xi][yi]))return;
	if(ans[xi][yi]==0)ans[xi][yi]=time;
	else ans[xi][yi]=min(ans[xi][yi],time);
	if(ans[xi][yi]>maxa){
		ax=xi;
		ay=yi;
		maxa=ans[xi][yi];
	}
	fd(xi+1,yi,time+1);
	fd(xi-1,yi,time+1);
	fd(xi,yi+1,time+1);
	fd(xi,yi-1,time+1);
	return;
}
int main(){
	while(cin >> x >> y){
		for(int i=0;i<x;++i){
			for(int j=0;j<y;++j){
				ans[i][j]=0;
				cin >> mp[i][j];
			}
		}
		for(int i=0;i<x;++i){
			if(mp[i][0]=='.'){
				fd(i,0,1);
				break;
			}
			if(mp[i][y-1]=='.'){
				fd(i,y-1,1);
				break;
			}
		}
		for(int j=0;j<y;++j){
			if(mp[0][j]=='.'){
				fd(0,j,1);
				break;
			}
			if(mp[x-1][j]=='.'){
				fd(x-1,j,1);
				break;
			}
		}
		cout << ax+1 << " " << ay+1 << "\n"; 
		
	}
} 
