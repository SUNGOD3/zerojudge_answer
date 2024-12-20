#include <iostream>  
using namespace std;
int n,m,ans,x,y,v,adj[101][101];  // adjacency matrix
int d[101];       // 記錄目前的MST到圖上各點的距離
bool visit[101];  // 記錄各個點是不是已在MST之中
void prim(){
    for (int i=0; i<n; i++) d[i] = 1e9;
    // 選擇任意一點做為樹根。此處選擇第零點做為樹根。
    d[0] = 0;
    for (int i=0; i<n; i++){
        // 找不在樹上、離樹最近的點。
        int a = -1, b = -1, min = 1e9;
        for (int j=0; j<n; j++)
            if (!visit[j] && d[j] < min){
                a = j;  // 持續記錄最近的點
                min = d[j];
            }
        // 從起點可連通的點已經找完
        if (a == -1) break;
        visit[a] = 1;
        // relaxation
        // 此處與Dijkstra's Algorithm不同，離樹最近，不是離根最近。
        for (b=0; b<n; b++)
            if  (!visit[b] && adj[a][b] < d[b])
                d[b] = adj[a][b];
    }
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
    cin >> n >> m; 
    for(int i=0;i<n;++i)
    	for(int j=0;j<n;++j){
    		if(i==j)
    			adj[i][j]=0;
			else
				adj[i][j]=1e9;
		}
    for(int i=0;i<m;++i){
        cin >> x >> y >> v;
        adj[x][y]=min(adj[x][y],v);
        adj[y][x]=min(adj[y][x],v);
    }
    prim();
    for(int i=0;i<n;++i)
    	ans+=d[i];
    cout << ans << "\n";   
}  
