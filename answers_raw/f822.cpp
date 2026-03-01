#include <iostream>
using namespace std;
int a,b,type;
char ans[10][10];
void dfs(int x,int y){
	if(x<0||y<0||x>=9||y>=9||type==-1||ans[x][y]=='*')return;
	if((type==1&&ans[x][y]=='W')||(type==2&&ans[x][y]=='B')){
		type=-1;
		return;
	}
	if(ans[x][y]=='W'){
		type=2;
		return;
	}
	else if(ans[x][y]=='B'){
		type=1;
		return;
	}
	else{
		ans[x][y]='*';
		dfs(x-1,y);
		dfs(x+1,y);
		dfs(x,y-1);
		dfs(x,y+1);
	}
}
int main(){
	for(int i=0;i<9;++i)
		for(int j=0;j<9;++j)
			cin >> ans[i][j];
	for(int i=0;i<9&&type!=-1;++i){
		for(int j=0;j<9&&type!=-1;++j){
			if(ans[i][j]=='B')
				++a;
			else if(ans[i][j]=='W')
				++b;
			else{
				type=0;
				dfs(i,j);
				if(type==-1)break;
				for(int i=0;i<9;++i){
					for(int j=0;j<9;++j){
						if(ans[i][j]=='*'){
							if(type==1)
								ans[i][j]='B';
							else
								ans[i][j]='W';
						}
					}
				}
				if(type==1)
					++a;
				else
					++b;
			}
		}
	}
	if(type==-1)
		cout << "Wrong\n"; 
	else{
		if(a>b)
			cout << "Black wins!!\n";
		else
			cout << "White wins!!\n";
		cout << a << ":" << b << "\n";
		for(int i=0;i<9;++i){
			for(int j=0;j<9;++j)
				cout << ans[i][j];
			cout << "\n";
		}
	}
} 
