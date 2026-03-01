#include <iostream>
using namespace std;
bool ans[8][8][92];
bool queen[8][8];
int count=0;
bool chat(int r,int c){
	for(int i=0;i<8;++i){ 
        if(queen[i][c]==1&&i!=r) 
            return 0; 
        else if(queen[r][i]==1&&i!=c) 
            return 0; 
        else if(r+i<8&&c+i<8&&queen[r+i][c+i]==1) 
            return 0; 
        else if(r+i<8&&c-i>=0&&queen[r+i][c-i]==1) 
            return 0; 
        else if(r-i>=0&&c+i<8&&queen[r-i][c+i]==1) 
            return 0; 
        else if(r-i>=0&&c-i>=0&&queen[r-i][c-i]==1) 
            return 0; 
    } 
    return 1; 
}
void locate_queen(int col){ 
    for(int j=0;j<8;++j){ 
        queen[col][j]=chat(col,j); 
        if(col==7&&queen[col][j]==1){
        	for(int ii=0;ii<8;++ii)
        		for(int jj=0;jj<8;++jj)
        			ans[jj][ii][count]=queen[ii][jj];
            ++count; 
            queen[col][j]=0;
            break; 
        } 
        else if(queen[col][j]==1){ 
            locate_queen(col+1);  
            queen[col][j]=0;
        }
	} 
} 
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	locate_queen(0);
	int c,a,b;
	cin >> c;
	while(c--){
		cin >> a >> b;
		cout << "SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n";
		--a;
		--b;
		int ansn=0;
		for(int cc=0;cc<92;++cc){
			if(ans[a][b][cc]==1){
				if(ansn<9)
					cout << " ";
				cout << ++ansn << "      ";
				for(int i=0;i<8;++i){
					for(int j=0;j<8;++j){
						if(ans[j][i][cc]==1){
							cout << j+1 ;
							if(i!=7){
								cout << " ";
							}
							break;
						}
					}
				}
				cout << "\n";
			}
		}
		if(c)
			cout << "\n";
	}
} 
