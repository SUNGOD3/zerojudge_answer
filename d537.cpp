#include <iostream>
#include <map>
using namespace std;
int r[105][105],b[105][105],yl[105][105],a[3][2],x,y,n,ans;
char c;
map <char,int> mp;
void rd(int x,int y,int t){
	for(int i=-t;i<=t;++i){
		for(int j=-t;j<=t;++j){
			if(x+i<=n&&y+j<=n&&x+i>0&&y+j>0){
				r[x+i][y+j]=1;
			}
		}
	}
}
void bd(int x,int y,int t){
	for(int i=-t;i<=t;++i){
		for(int j=-t;j<=t;++j){
			if(x+i<=n&&y+j<=n&&x+i>0&&y+j>0){
				b[x+i][y+j]=2;
			}
		}
	}
}
void yd(int x,int y,int t){
	for(int i=-t;i<=t;++i){
		for(int j=-t;j<=t;++j){
			if(x+i<=n&&y+j<=n&&x+i>0&&y+j>0){
				yl[x+i][y+j]=4;
			}
		}
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	mp['R']=1;
	mp['B']=2;
	mp['Y']=4;
	mp['O']=5;
	mp['P']=3;
	mp['G']=6;
	mp['D']=7;
	cin >> n;
	for(int i=0;i<3;++i){
		cin >> c >> x >> y;
		++x;
		++y;
		if(c=='R'){
			a[0][0]=x;
			a[0][1]=y;
		}
		if(c=='B'){
			a[1][0]=x;
			a[1][1]=y;
		}
		if(c=='Y'){
			a[2][0]=x;
			a[2][1]=y;
		}
	}
	cin >> c;
	for(int i=0;i<=n;++i){
		rd(a[0][0],a[0][1],i);
		bd(a[1][0],a[1][1],i);
		yd(a[2][0],a[2][1],i);
		int tmp=0;
		for(int ii=1;ii<=n;++ii){
			for(int jj=1;jj<=n;++jj){
				if(r[ii][jj]+b[ii][jj]+yl[ii][jj]==mp[c]){
					++tmp;
				}
			}
		}
		ans=max(tmp,ans);
	}
	cout << ans;
}
