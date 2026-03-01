#include <iostream>
#include <sstream>
using namespace std;
int a[101][101],n,x,y,w,p,used[101],t;
string test;
void dfs(int xx,int yy){
	a[xx][yy]=a[yy][xx]=0;
	for(int i=0;i<101;++i){
		if(a[xx][i])
			dfs(xx,i);
		if(a[i][yy])
			dfs(i,yy);
	}
}
int main(){
	cin.sync_with_stdio(false), cin.tie(0);
	cin >> n;
	getline(cin,test);
	while(n--){
		for(int i=0;i<101;++i){
			used[i]=0;
			for(int j=0;j<101;++j)
				a[i][j]=0;
		}
		w=0;
		p=0;
		getline(cin,test);
		stringstream ss(test);
		while(ss >> test){
			x=y=0;
			int i=0;
			for (; test[i] != ','; i++)
				x *= 10, x += int(test[i] - '0');
			for (i++; i != test.size(); i++)
				y *= 10, y += int(test[i] - '0');
			a[x][y]=a[y][x]=used[x]=used[y]=1;
			++w;
		}
		for(int i=0;i<101;++i)
			if(used[i])
				++p;
		if(p!=w+1)
			cout << "F\n";
		else{
			t=1;
			for(int i=0;i<101;++i)
				for(int j=0;j<101;++j)
					if(a[i][j]){
						dfs(i,j);
						i=j=101;
					}
			for(int i=0;i<101&&t;++i)
				for(int j=0;j<101&&t;++j)
					if(a[i][j]){
						cout << "F\n";
						t=0;
					}
			if(t)
				cout << "T\n";
		}
	}
} 
