#include <iostream>
using namespace std;
bool g[1001][1001],has[1001];
int b[1001],ct[1001];
int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int n,m,k,ans=0;
    cin >> n >> m >> k;
    for(int i = 0; i < k; i++){
        cin >> b[i];
        has[b[i]] = 1;
    }
    for(int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        g[a][b] = 1;
        ++ct[b];
    }
    ans=k;
    for(int i = 0; i < k; i++){
        for(int j=0;j<n;++j){
            if(g[b[i]][j]&&!has[j]){
                g[b[i]][j] = 0;
                --ct[j];
                if(ct[j]==0){
                    b[ans++]=j;
                }
            }
        }
    }
    for(int i=k;i<ans;++i){
        for(int j=0;j<n;++j){
            if(g[b[i]][j]&&!has[j]){
                g[b[i]][j] = 0;
                --ct[j];
                if(ct[j]==0){
                    b[ans++]=j;
                }
            }
        }
    }
    cout << ans;
}