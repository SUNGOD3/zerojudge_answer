#include <iostream>
using namespace std;
bool a[501][501];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int m,n,x,y,x2,y2,tmp;
	while(cin >> n >> m){
		for(int i=0;i<501;++i)
			for(int j=0;j<501;++j)
				a[i][j]=0;
		x2=-1;
		while(m--){
			cin >> x >> y;
			y--;
			x--;
			if(x2!=-1){
				if(x==x2){
					tmp=max(y,y2);
					for(int i=min(y,y2);i<=tmp;++i)
						a[x][i]=1;
				}
				else{
					tmp=max(x,x2);
					for(int i=min(x,x2);i<=tmp;++i)
						a[i][y]=1;
				}		
			}
			x2=x;
			y2=y;
		}
		for(int i=0;i<=n+1;++i)
			cout << "-";
		cout << "\n";
		for(int i=0;i<n;++i){
			cout << "|";
			for(int j=0;j<n;++j){
				if(a[i][j]==1)
					cout << "*";
				else
					cout << " ";
			}
			cout << "|\n";
		}
		for(int i=0;i<=n+1;++i)
			cout << "-";
		cout << "\n";
	}
} 
