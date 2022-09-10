#include <iostream>
using namespace std;
int fmap[5][5][16633],it,p[5][5],n=4,awin,bwin,tie,np[5][5];
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
inline void bdfs(int x,int y,int round){
	int stp=0;
	if(round&1){
		np[x][y]=1;
		for(int i=0;i<n;++i)
			if(!np[i][y]){
				bdfs(i,y,round+1);
				stp=1;
	 		}
	}
	else{
		np[x][y]=2;
		for(int i=0;i<n;++i)
			if(!np[x][i]){
				bdfs(x,i,round+1);
				stp=1;
			}
	}
	if(stp==0){
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				fmap[i][j][it]=np[i][j];
			}
		}
		++it;
	}
	np[x][y]=0;
	return;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=0;i<4;++i){
		bdfs(0,i,1);
	}
	while(cin >> n){
		for(int i=0;i<5;++i)
			for(int j=0;j<5;++j)
				np[i][j]=p[i][j]=0;
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j)
				cin >> p[i][j];
		awin=bwin=tie=0;
		if(n!=4){
			for(int i=0;i<n;++i)
				dfs(0,i,0,0,1);
		}
		else{
			for(int i=0;i<it;++i){
				int as=0,bs=0;
				for(int ii=0;ii<n;++ii){
					for(int jj=0;jj<n;++jj){
						if(fmap[ii][jj][i]==2)
							bs+=p[ii][jj];
						else if(fmap[ii][jj][i]==1)
							as+=p[ii][jj];
					}
				}	
				if(as>bs){
					++awin;
				}
				else if(bs>as){
					++bwin;
				}
				else{
					++tie;
				}
			}
		}
		cout << awin << " " << bwin << " " << tie << "\n";
	}
}
