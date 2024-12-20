#include <iostream>
using namespace std;
int p[5][5],n,awin,bwin,tie,np[5][5];
inline void dfs(int x,int y,int as,int bs,int round){
	int stp=0;
	np[x][y]=1;
	if(round&1){
		as+=p[x][y];
		for(int i=0;i<n;++i)
			if(!np[i][y]){
				dfs(i,y,as,bs,round+1);
				stp=1;
	 		}
	}
	else{
		bs+=p[x][y];
		for(int i=0;i<n;++i)
			if(!np[x][i]){
				dfs(x,i,as,bs,round+1);
				stp=1;
			}
	}
	if(stp==0){
		if(as>bs)
			++awin;
		else if(bs>as)
			++bwin;
		else
			++tie;
	}
	np[x][y]=0;
	return;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		for(int i=0;i<5;++i)
			for(int j=0;j<5;++j)
				np[i][j]=p[i][j]=0;
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j)
				cin >> p[i][j];
		awin=bwin=tie=0;
		for(int i=0;i<n;++i)
			dfs(0,i,0,0,1);
		cout << awin << " " << bwin << " " << tie << "\n";
	}
} 
