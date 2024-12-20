#include <iostream>
using namespace std;
char cv[251][251],is,t;
int x,y,z,z2,mx,my;
string name;
void dfs(int x,int y,char c,char g){
	if(x<=0||x>mx||y<=0||y>my||cv[y][x]!=c)return;
	cv[y][x]=g;
	dfs(x+1,y,c,g);
	dfs(x-1,y,c,g);
	dfs(x,y+1,c,g);
	dfs(x,y-1,c,g);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> is){ 
		if(is=='I'){
			cin >> x >> y;
			mx=x;
			my=y;
			for(int i=1;i<=my;++i)
				for(int j=1;j<=mx;++j)
					cv[i][j]='O';
		}
		else if(is=='C'){
			for(int i=1;i<=my;++i)
				for(int j=1;j<=mx;++j)
					cv[i][j]='O';
		}
		else if(is=='L'){
			cin >> x >> y >> t;
			cv[y][x]=t;
		}
		else if(is=='V'){
			cin >> x >> y >> z >> t;
			int tmp=min(y,z);
			z=max(y,z);
			y=tmp;
			for(int j=y;j<=z;++j)
				cv[j][x]=t;
		}
		else if(is=='H'){
			cin >> x >> z >> y >> t;
			int tmp=min(x,z);
			z=max(x,z);
			x=tmp;
			for(int i=x;i<=z;++i)
				cv[y][i]=t;
		}
		else if(is=='K'){
			cin >> x >> y >> z >> z2 >> t;
			int tmp=min(x,z);
			z=max(x,z);
			x=tmp;
			int tmp2=min(y,z2);
			z2=max(y,z2);
			y=tmp2;
			for(int i=y;i<=z2;++i)
				for(int j=x;j<=z;++j)
					cv[i][j]=t;
		}
		else if(is=='F'){
			cin >> x >> y >> t;
			if(cv[y][x]!=t)dfs(x,y,cv[y][x],t);
		}
		else if(is=='S'){
			cin >> name;
			cout << name << "\n";
			for(int i=1;i<=my;++i){
				for(int j=1;j<=mx;++j)
					cout << cv[i][j] ;
				cout << "\n";
			}
		}
		else if(is=='X')break;
		else
			getline(cin,name);
	}
} 
