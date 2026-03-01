#include <iostream>
using namespace std;
int a[11][11],m,n,mn,ans,us[11];
inline bool c(int x,int y,int t){
	for(int i=0;i<mn;++i)
			if(a[x][i]||a[i][y])return 0;
	if(t==1){
		for(int i=0;i<mn&&i+x<mn&&i+y<mn;++i)
			if(a[x+i][y+i])return 0;
		for(int i=0;i<mn&&x-i>=0&&y-i>=0;++i)
			if(a[x-i][y-i])return 0;
		for(int i=0;i<mn&&x-i>=0&&y+i<mn;++i)
			if(a[x-i][y+i])return 0;
		for(int i=0;i<mn&&x+i<mn&&y-i>=0;++i)
			if(a[x+i][y-i])return 0;
	}
	else{
		for(int i=0;i<mn&&i+x<mn&&i+y<mn;++i)
			if(a[x+i][y+i]==1)return 0;
		for(int i=0;i<mn&&x-i>=0&&y-i>=0;++i)
			if(a[x-i][y-i]==1)return 0;
		for(int i=0;i<mn&&x-i>=0&&y+i<mn;++i)
			if(a[x-i][y+i]==1)return 0;
		for(int i=0;i<mn&&x+i<mn&&y-i>=0;++i)
			if(a[x+i][y-i]==1)return 0;
	}
	return 1;
}
inline void put2(int y,int s){
	if(s==n){
		++ans;
		return;
	}
	for(int i=0;i<mn;++i){
		if(!us[i])
		for(int j=y;j<mn;++j)
			if(!a[i][j]&&c(i,j,2)){
				a[i][j]=2;
				us[i]=1;
				put2(j,s+1);
				us[i]=0;
				a[i][j]=0;
			}
	}
}
void put(int y,int s){
	if(s==m){
		for(int i=0;i<mn;++i){
			if(!us[i])
			for(int j=0;j<mn;++j)
				if(!a[i][j]&&c(i,j,2)){
					us[i]=1;
					a[i][j]=2;
					put2(j,1);
					a[i][j]=0;
					us[i]=0;
				}
		}
		return;
	}
	for(int i=0;i<mn;++i){
		if(!us[i])
		for(int j=y;j<mn;++j)
			if(!a[i][j]&&c(i,j,1)){
				a[i][j]=1;
				us[i]=1;
				put(j,s+1);
				us[i]=0;
				a[i][j]=0;
			}
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> m >> n){
		ans=0;
		mn=m+n;
		for(int i=0;i<mn;++i){
			us[i]=0;
			for(int j=0;j<mn;++j)
				a[i][j]=0;
		}
		for(int i=0;i<mn;++i)
			for(int j=0;j<mn;++j){
				a[i][j]=1;
				us[i]=1;
				put(j,1);
				us[i]=0;
				a[i][j]=0;
			}
		cout << ans << "\n";
	}
} 
