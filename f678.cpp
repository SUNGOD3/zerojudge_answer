#include <iostream>  
using namespace std;
int n,m,ans,x,y,v,adj[101][101];  // adjacency matrix
int d[101];       // �O���ثe��MST��ϤW�U�I���Z��
bool visit[101];  // �O���U���I�O���O�w�bMST����
void prim(){
    for (int i=0; i<n; i++) d[i] = 1e9;
    // ��ܥ��N�@�I������ڡC���B��ܲĹs�I������ڡC
    d[0] = 0;
    for (int i=0; i<n; i++){
        // �䤣�b��W�B����̪��I�C
        int a = -1, b = -1, min = 1e9;
        for (int j=0; j<n; j++)
            if (!visit[j] && d[j] < min){
                a = j;  // ����O���̪��I
                min = d[j];
            }
        // �q�_�I�i�s�q���I�w�g�䧹
        if (a == -1) break;
        visit[a] = 1;
        // relaxation
        // ���B�PDijkstra's Algorithm���P�A����̪�A���O���ڳ̪�C
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
