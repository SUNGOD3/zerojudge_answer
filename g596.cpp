#include <iostream>
using namespace std;
int a[105][105],m,n,h,r,c,t,ans=0,mx=0;
int dx[]={-1,1,0,0},dy[]={0,0,-1,1};
void addedge(int nx,int ny,int v){
	for (int j = min(r, nx)+1; j < max(r, nx); ++j) 
        a[j][ny]+=v;
    for (int j = min(c, ny)+1; j < max(c, ny); ++j)
        a[nx][j]+=v;
} 
int main() {
    cin >> m >> n >> h;
    for (int k = 0; k < h; k++) {
        cin >> r >> c >> t;
        a[r][c]=(t?0:-1);
        for (int i = 0; i < 4; ++i) {
            int nx = r + dx[i],ny = c + dy[i];
            while (nx >= 0 && nx < m && ny >=0 && ny < n && a[nx][ny]) {
                if (a[nx][ny] == -1) {
                    addedge(nx,ny,-1);
                    break;
                }
                nx += dx[i];
                ny += dy[i];
            }
            if (!t){
	            nx = r + dx[i],ny = c + dy[i];
	            while (nx >= 0 && nx < m && ny >=0 && ny < n) {
                    if (a[nx][ny] == -1) {
                        addedge(nx,ny,1);
                        break;
                    }
                    nx += dx[i];
                    ny += dy[i];
                }
	        }
        }
        ans = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                ans += (a[i][j] != 0);
        mx = max(mx, ans);
    }
    cout << mx << "\n" << ans;
}
