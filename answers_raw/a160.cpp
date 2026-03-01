#include <iostream>
using namespace std;
int n=0,ans=0;
bool space[13][13];
bool valid_position(int r , int c){ 
    for(int i=0;i<n;++i){ 
        if(space[i][c]==1&&i!=r) 
            return 0; 
        else if(space[r][i]==1&&i!=c) 
            return 0; 
        else if(r+i<n&&c+i<n&&space[r+i][c+i]==1) 
            return 0; 
        else if(r+i<n&&c-i>=0&&space[r+i][c-i]==1) 
            return 0; 
        else if(r-i>=0&&c+i<n&&space[r-i][c+i]==1) 
            return 0; 
        else if(r-i>=0&&c-i>=0&&space[r-i][c-i]==1) 
            return 0; 
    } 
    return 1; 
} 
void put(int col){
	for(int j=0;j<n;++j){
		space[col][j]=valid_position(col,j);
		if(space[col][j]==1&&col==n-1){
			for(int ii=0;ii<n;++ii){
				for(int jj=0;jj<n;++jj){
					if(space[ii][jj])
						cout << 'Q';
					else
						cout << 'x';
				}
				cout << "\n";
			}
			++ans;
			cout << "\n";
			space[col][j]=0;
			break;
		}
		else if(space[col][j]==1){
			put(col+1);
			space[col][j]=0;
		}
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		if(n==0)break;
		ans=0;
		for(int i=0;i<13;++i)
			for(int j=0;j<13;++j)
				space[i][j]=0;
		put(0);
		cout << "\n" << ans << "\n";
	}
} 
