#include <iostream>
using namespace std;
int ct[31][31];
bool open[31][31];
void dfs(int x,int y,int n,int m){
    if(x<0 || x>=n || y<0 || y>=m || open[x][y]){
        return;
    }
    open[x][y]=true;
    if(ct[x][y]>0){
        return;
    }
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            dfs(x+i,y+j,n,m);
        }
    }
}
int main(){
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    string s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
        for(int j=0;j<m;j++){
            if(s[i][j]=='*'){
                for(int ii=-1;ii<=1;ii++){
                    for(int jj=-1;jj<=1;jj++){
                        if(i+ii>=0 && i+ii<n && j+jj>=0 && j+jj<m){
                            ct[i+ii][j+jj]++;
                        }
                    }
                }
            }
        }
    }
    --x;--y;
    dfs(x,y,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(open[i][j]){
                if(ct[i][j]){
                    cout << ct[i][j];
                }
                else{
                    cout << "_";
                }
            }else {
                cout << "#";
            }
        }
        cout << '\n';
    }
}