#include <iostream>
using namespace std;
int n,a[10][10],b[10][10],ans,sn,s,wa,ca;
bool cwa(int x,int y,int v){
	for(int i=0;i<n;++i)
		if((a[x][i]==v&&i!=y)||(a[i][y]==v&&i!=x))
			return 0;
	int bx=(x/sn)*sn,by=(y/sn)*sn;
	for(int i=0;i<sn;++i)
		for(int j=0;j<sn;++j)
			if(a[bx+i][by+j]==v&&(bx+i!=x||by+j!=y))
				return 0;
	return 1;
}
bool check(int x,int y,int v){
	for(int i=0;i<n;++i)
		if(a[x][i]==v||a[i][y]==v)
			return 0;
	int bx=(x/sn)*sn,by=(y/sn)*sn;
	for(int i=0;i<sn;++i)
		for(int j=0;j<sn;++j)
			if(a[bx+i][by+j]==v)
				return 0;
	return 1;
}
void dfs(int x,int y){
	if(ans>1)return;
	if(x==n&&y==n-1){
		++ans;
		return;
	}
	if(b[x][y]){
		for(int i=1;i<=n;++i)
			if(check(x,y,i)){
				a[x][y]=i;
				dfs(x+(y+1)/n,(y+1)%n);
				a[x][y]=0;
			}
	}
	else
		dfs(x+(y+1)/n,(y+1)%n);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> a[0][0]){
		for(int i=0;i<10;++i)
			for(int j=0;j<10;++j){
				if(i==0&&j==0)++j;
				a[i][j]=0;
				b[i][j]=0;
			}
		n=3;wa=0;ans=0;sn=n;n*=n;
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j){
				if(i!=0||j!=0)cin >> a[i][j];
				b[i][j]=!a[i][j];
			}
		for(int i=0;i<n&&wa==0;++i)
			for(int j=0;j<n&&wa==0;++j)
				if(a[i][j]!=0)
					if(cwa(i,j,a[i][j])==0)
						wa=1;
		if(wa==0)dfs(0,0);
		cout << "Case " << ++ca << ": ";
		if(wa)
			cout << "Illegal.\n";
		else if(ans==0)
			cout << "Impossible.\n";
		else if(ans==1)
			cout << "Unique.\n";
		else if(ans==2)
			cout << "Ambiguous.\n";
	}
} 
