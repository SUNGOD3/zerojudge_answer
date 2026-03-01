#include <iostream>
using namespace std;
int an[25][25],n,m,x,y,k,ca;
string name[25];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n >> m){
		if(n==0&&m==0)break;
		for(int i=0;i<n;++i)
			cin >> name[i];
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j)
				(i==j)?an[i][j]=0:an[i][j]=500000;
		while(m--){
			cin >> x >> y >> k;
			--x;--y; 
			an[x][y]=an[y][x]=k;
			//an[x][y]=min(an[x][y],k);an[y][x]=min(an[y][x],k);
		}
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j)
				for(int k=0;k<n;++k)
					an[j][k]=min(an[j][k],an[j][i]+an[i][k]);
		int ans=5000000;
		for(int i=0;i<n;++i){
			int tmp=0;
			for(int j=0;j<n;++j)
				tmp+=an[i][j];
			ans=min(tmp,ans);
			//cout << tmp << " " << name[i] << "\n";
		}
		for(int i=0;i<n;++i){
			int tmp=0;
			for(int j=0;j<n;++j)
				tmp+=an[i][j];
			if(tmp==ans){
				cout << "Case #" << ++ca << " : " << name[i] << "\n";
				break;
			}
		}
	}
} 
