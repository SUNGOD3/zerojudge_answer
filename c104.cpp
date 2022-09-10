#include <iostream>
#include <iomanip>
using namespace std;
bool ans[8][8][92],queen[8][8];
int counter=0,maxn,t[8][8],k;
bool vp(int r , int c){ 
    for(int i=0;i<8;++i){ 
        if(queen[i][c]&&i!=r) 
            return 0; 
        else if(queen[r][i]&&i!=c) 
            return 0; 
        else if(r+i<8&&c+i<8&&queen[r+i][c+i]) 
            return 0; 
        else if(r+i<8&&c-i>=0&&queen[r+i][c-i]) 
            return 0; 
        else if(r-i>=0&&c+i<8&&queen[r-i][c+i]) 
            return 0; 
        else if(r-i>=0&&c-i>=0&&queen[r-i][c-i]) 
            return 0; 
    } 
    return 1; 
} 
void lq(int col){ 
    for(int j=0;j<8;++j){ 
        queen[col][j]=vp(col,j); 
        if(col==7&&queen[col][j]){ 
        	for(int ii=0;ii<8;++ii)
        		for(int jj=0;jj<8;++jj)
        			ans[ii][jj][counter]=queen[ii][jj];
            ++counter; 
            queen[col][j]=0; 
            break; 
        } 
        else if(queen[col][j]){ 
            lq(col+1); 
            queen[col][j]=0; 
        } 
    } 
} 
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	lq(0);
	cin >> k;
	while(k--){
		for(int i=0;i<8;++i)
			for(int j=0;j<8;++j)
				cin >> t[i][j];
		maxn=0;
		for(int cc=0;cc<92;++cc){
			int ansc=0;
			for(int i=0;i<8;++i)
				for(int j=0;j<8;++j)
					if(ans[i][j][cc])
						ansc+=t[i][j];
			if(ansc>maxn)
				maxn=ansc;
		}
		cout << setw(5) << maxn << "\n";
	}
} 
