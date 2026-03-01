#include <iostream>
using namespace std;
int q,xt,yt,n;
bool s[5005][5005];
int main(){
	cin >> q;
	while(q--){
		cin >> n >> xt >> yt;
		int x=1,y=n/2+1,no=1;
		for(int i=1;i<=n;++i)
			for(int j=1;j<=n;++j)
				s[i][j]=0;
		s[x][y]=1;
		while(x!=xt||y!=yt){
			if(x-1>0&&y-1>0){
				if(!s[x-1][y-1]){ 
					--x;
					--y;
				} 
				else{
					++x;
				}
			}
			else if(x-1==0&&y-1>0){
				if(!s[n][y-1]){ 
					x=n;
					--y;
				} 
				else{
					++x;
				}
			}
			else if(x-1>0&&y-1==0){
				if(!s[x-1][n]){ 
					--x;
					y=n;
				} 
				else{
					++x;
				}
			}
			else{
				++x;
			}
			s[x][y]=1;
			++no;
		}
		cout << no << "\n";
	}
} 
