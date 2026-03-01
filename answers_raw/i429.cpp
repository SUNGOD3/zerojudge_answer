#include <iostream>
using namespace std;
long n,m,a[1005],b[1005],dp[1005][1005],ans=-1e9;
int main(){
        cin.tie(0); ios::sync_with_stdio(0);
        cin >> n >> m;
        for(int i=0;i<n;++i)
            cin >> a[i]; 
        for(int i=0;i<m;++i)
            cin >> b[i];
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                dp[i][j]=a[i]*b[j];
        for(int i=0;i<n;++i){
            long tmp=0;
            for(int j=0;i+j<n&&j<m;++j){
                tmp+=dp[i+j][j];
                ans=max(ans,tmp);
                if(tmp<0)tmp=0;
            }
        }
        for(int j=0;j<m;++j){
            long tmp=0;
            for(int i=0;i<n&&i+j<m;++i){
                tmp+=dp[i][i+j];
                ans=max(ans,tmp);
                if(tmp<0)tmp=0;
            }    
        }
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                dp[i][j]=a[n-i-1]*b[j];
        for(int i=0;i<n;++i){
            long tmp=0;
            for(int j=0;i+j<n&&j<m;++j){
                tmp+=dp[i+j][j];
                ans=max(ans,tmp);
                if(tmp<0)tmp=0;
            }
        }
        for(int j=0;j<m;++j){
            long tmp=0;
            for(int i=0;i<n&&i+j<m;++i){
                tmp+=dp[i][i+j];
                ans=max(ans,tmp);
                if(tmp<0)tmp=0;
            }    
        }
        cout << ans;
} 
