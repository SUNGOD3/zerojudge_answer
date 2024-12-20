#include <iostream>
using namespace std;
int a[51][51],r,c,k,m,b[51][51];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> r >> c >> k >> m;
	for(int i=0;i<r;++i)
		for(int j=0;j<c;++j)
			cin >> a[i][j];
	while(m--){
		for(int i=0;i<r;++i){
			for(int j=0;j<c;++j){
				if(a[i][j]==-1)
					b[i][j]=-1;
				else{
					int ak=a[i][j]/k;
					if(i+1<r&&a[i+1][j]!=-1){
						b[i+1][j]+=ak;
						b[i][j]-=ak;
					}
					if(i>0&&a[i-1][j]!=-1){
						b[i-1][j]+=ak;
						b[i][j]-=ak;
					}
					if(j+1<c&&a[i][j+1]!=-1){
						b[i][j+1]+=ak;
						b[i][j]-=ak;
					}
					if(j>0&&a[i][j-1]!=-1){
						b[i][j-1]+=ak;
						b[i][j]-=ak;
					}
				}
			}
		}
		for(int i=0;i<r;++i){
			for(int j=0;j<c;++j){
				if(a[i][j]!=-1)a[i][j]+=b[i][j];
				b[i][j]=0;
			}
		}
	}
	int ans1=0,ans2=100000;
	for(int i=0;i<r;++i)
		for(int j=0;j<c;++j)
			if(a[i][j]!=-1){
				ans1=max(ans1,a[i][j]);
				ans2=min(ans2,a[i][j]);
			}
	cout << ans2 << "\n" << ans1;
} 
