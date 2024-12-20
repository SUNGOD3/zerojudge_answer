#include <iostream>
using namespace std;
int k[32][32],t[10],count=0;
void dfs(int x,int y,int n){
	count++;
	k[x][y]=0;
	if(k[x+1][y]==n){
		dfs(x+1,y,n);
	}
	if(k[x][y+1]==n){
		dfs(x,y+1,n);
	}
	if(x-1>=0&&k[x-1][y]==n){
		dfs(x-1,y,n);
	}
	if(y-1>=0&&k[x][y-1]==n){
		dfs(x,y-1,n);
	}
}
int main(){
	int a,b;
	cin >> a >> b;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin >> k[i][j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(k[i][j]!=0){
				int tmp=k[i][j];
				dfs(i,j,k[i][j]);
				if(count>t[tmp]){
					t[tmp]=count;
				}
				count=0;
			}
		}
	}
	cin >> a;
	while(a--){
		cin >> b;
		if(t[b]<2){
			cout << "0\n";
		}
		else{
			cout << t[b] << "\n";
		}
	}
} 
